import os
import bpy
import shutil
import bmesh

silly = '//wsl$/Ubuntu/root/NathaCT/'
assetDir = 'assets/'

map = "build/chameleontwist.jp.map"
mapDir = silly + map

#whether or not texture filtering is enabled
#option mostly for me because i love the crust :D
filtering = True

#whether or not the model's tris should be merged
#use this if you want an actual model rip, otherwise
#all of the tris will be separated.
#im looking at you pj64 model ripping.
fixVerts = True

# here you can define Merge By Distance threshold
merge_threshold = 0.00005

#shouldnt need this
if os.path.exists("C:/assets/"):
    shutil.rmtree("C:/assets/")
#

#object integer scaling
#if you cast some of these ints to float the models would be HUGE
scale = 100.0

def dumpGfx2(path):
    toTrack = {
        'txt': ['gsDPLoadTextureTile_4b','gsDPLoadTextureTile'],
        'vtx': ['gsSPVertex'],
        'tri': ['gsSP1Triangle', 'gsSP2Triangles'],
        'vtxColor': ['gsDPSetPrimColor'],
    }
    gfxLines = open(path).readlines()

    fileList = []
    i = 0
    for line in gfxLines:
        line = line.strip()

        for gfxCommand in list(toTrack.keys()):
            isValid = False
            for indicator in toTrack[gfxCommand]:
                if line.find(indicator) != -1:
                    fileList.append({
                        "Command": gfxCommand,
                        "Full": line,
                        "Indicator": indicator,
                        "i": i})
                    isValid = True
                    break
            if isValid: break
        i += 1
    
    #cleanup
    i = 0
    while i < len(fileList):
        if fileList[i]["Indicator"] == "gsSP2Triangles":
            #if it isnt entirely inlined (normal)
            if fileList[i]["Full"].find(")") == -1:
                fileList[i]["Full"] = fileList[i]["Full"].strip() + gfxLines[fileList[i]["i"]+1].strip()
        i += 1
    

    i = 0
    while i < len(fileList):
        file = fileList[i]
        #needsFile
        if not file["Command"] in ["tri", "vtxColor"]:
            args = file["Full"].split("(")[-1].split(")")[0].split(",")
            symbol = args[0]
            #if symbol is array (eg vtx)
            if symbol.find("[") != -1:
                symbol = symbol.split("[")[0].replace("&", "")
                
            topLayer = True
            #check original inc to see if its just defined there
            for line in gfxLines:
                if line.find(symbol) != -1 and line.find(" = ") != -1:
                    topLayer = False
                    break
            
            
            file = ""
            
            if topLayer:
                mapLines = open(mapDir, "r", encoding="utf-8").readlines()
                
                c = ""
                x = 0
                way = 1
                while x < len(mapLines):
                    line = mapLines[x]
                    #find where its actually defined in the rom map
                    if line.find("                "+symbol) != -1 and way == 1:
                        way = -1
                    #get the c from the mapping def
                    elif way == -1 and line.find(".c.o") != -1:
                        c = line.split("build/")[-1].split(".o")[0]
                        break
                    x += way
                
                cLines = open(silly+c, "r", encoding="utf-8").readlines()
                x = 0
                while x < len(cLines):
                    if cLines[x].find(symbol) != -1 and cLines[x].find(" = ") != -1:
                        file = cLines[x+1].split('#include "')[-1].split('"')[0]
                        break
                    x += 1
                
                
            else:
                #fill later with custom objects
                pass
            
            #use original files and not build artifacts
            if file.find("build/") != -1:
                file = file.split("build/")[-1].split(".inc.c")[0]
            
            fileList[i]["Symbol"] = symbol
            fileList[i]["File"] = file
        
        i += 1

    return fileList
    

def start(toUser = ""):
    if toUser == "": return

    files = []
    objdata = {
        'verts': [],
        'bank': [],
        'uvs': [],
        'uvAssigns': [],
        'faces': [],
        'textures': [],
    }

    mesh = bpy.data.meshes.new("model")
    object = bpy.data.objects.new("model", mesh)
    object.name = toUser.split("/")[-1].split(".gfx")[0]
    bpy.context.collection.objects.link(object)

    files = dumpGfx2(toUser)
    print(files)
    for file in files:
        args = file["Full"].split(file["Indicator"]+"(")[-1].split(")")[0].split(",")
        arrayPos = 0
        if args[0].find("]") != -1:
            arrayPos = int(args[0].split("]")[0].split("[")[-1])
        
        hasFile = "File" in list(file.keys())
        if hasFile:
            #begin the data usage.
            if file["Command"] == "vtx": #if resource is vertex data
                fileData = open(silly+file["File"]).readlines()
                bank = int(args[2])
                while len(objdata['bank']) < bank: objdata['bank'].append(0)#fill bank
                
                ao = int(args[1])
                i = 0
                offset = arrayPos #into VTX, as some calls start a specifie amount into the file.
                i += offset
                started = 0
                for fileLine in fileData:
                    if fileLine.find("}") == -1: #if there's a symbol at the start :)
                        started += 1
                while i < ao + offset:
                    line = fileData[i + int(started)]
                    values = line.replace("}", "").replace("{", "").split(",")
                    vec3s = []
                    #size down because ints being casted to floats can be REALLY big
                    for index in range(0,3): vec3s.append(int(values[index].strip()) / scale)
                    vec3s[0] *= -1 #flip x
                    vec3s.insert(1, vec3s.pop(2)) #swap y and z
                    objdata["verts"].append(vec3s)
                    id = len(objdata["verts"]) - 1
                    if len(objdata['bank']) < bank + 1: objdata['bank'].append(id)
                    else: objdata['bank'][bank] = id
                    uvs = []
                    for index in range(4,6): uvs.append(int(values[index].strip()))
                    objdata["uvs"].append(uvs)
                    i += 1
                    bank += 1
                
            elif file["Command"] == "txt": #if resource is texture data
                smallName = file["File"].split("/")[-1]
                matthew = bpy.data.materials.new(name=smallName)
                matthew.use_nodes = True
                
                bsdf = matthew.node_tree.nodes["Principled BSDF"]
                texImage = matthew.node_tree.nodes.new('ShaderNodeTexImage')
                #these shouldnt be needed
                copyTo = "C:/assets/" + smallName + ".png"
                makerTo = "C:/assets/"
                if not os.path.exists(makerTo):os.makedirs(makerTo)
                shutil.copyfile(silly+file["File"], copyTo)
                #

                texImage.image = bpy.data.images.load(copyTo)
                matthew.node_tree.links.new(bsdf.inputs['Base Color'], texImage.outputs['Color'])
                #these add transparency
                #thanks pacman party
                matthew.node_tree.links.new(bsdf.inputs['Alpha'], texImage.outputs['Alpha'])
                #use BLEND for objects like the training room lights
                matthew.blend_method = 'CLIP'
                #this is optional i just think it looks nice :)
                texImage.interpolation = "Linear" if filtering else "Closest"
                object.data.materials.append(matthew)
                objdata['textures'].append({
                    "pos": len(objdata['textures']),
                    "mat": matthew
                })
                
        elif file["Command"] == "tri": #if resource is tri data
            if file["Indicator"] == "gsSP1Triangle":
                tri = []
                for a in range(0,3): tri.append(objdata['bank'][int(args[a])])
                objdata["faces"].append(tri)
                objdata['uvAssigns'].append(objdata['textures'][-1] if len(objdata['textures']) >= 1 else 0)
            elif file["Indicator"] == "gsSP2Triangles":
                for t in range(0, 2):
                    t = 4 * t
                    tri = []
                    for a in range(0+t,3+t): tri.append(objdata['bank'][int(args[a])])
                    objdata["faces"].append(tri)
                    objdata['uvAssigns'].append(objdata['textures'][-1] if len(objdata['textures']) >= 1 else 0)
        
        elif file["Command"] == "vtxColor": #if resource is vertex color(ed)
            print(file)
            #TODO: add vertex coloring support
            #specifically, in combination with i(a) textures and just normal colored verts
            #obviously, the latter is just making a material with a solid color
            #though idk how to tint a grayscale texture in blender LOL
            pass
    
    mesh.from_pydata(objdata["verts"], [], objdata["faces"])

    bpy.context.view_layer.objects.active = object
    mesher = object.data
    bpy.ops.object.mode_set(mode='EDIT')
    bm = bmesh.from_edit_mesh(mesher)
    toAssign = [face for face in mesh.polygons]
    bpy.context.tool_settings.mesh_select_mode = [False, False, True]

    #set materials
    i = 0
    bm.faces.ensure_lookup_table()
    while i < len(bm.faces):
        bm.faces[i].select = True
        matData = objdata['uvAssigns'][i]
        if matData == 0:
            i += 1
            continue
        object.active_material_index = matData["pos"]
        bpy.ops.object.material_slot_assign()
        bm.faces[i].select = False
        i += 1

    #set uv coords
    uv_layer = bm.loops.layers.uv.verify()
    for i in range(len(bm.faces)):
        f = bm.faces[i]
        f.select = True
        bpy.ops.uv.unwrap()
        getVerts = objdata["faces"][i]
        matData = objdata['uvAssigns'][i]
        if matData == 0: continue
        text = object.data.materials[matData["pos"]].node_tree.nodes.get("Principled BSDF").inputs['Base Color'].links[0].from_node.image
        twidth, theight = text.size
        s = 0
        for l in f.loops:
            v = objdata["uvs"][getVerts[s]]
            zoink = 32768.0 / 8.0
            tx = v[0] / zoink
            ty = (v[1] / -zoink)
            tx /= (twidth / 64.0)
            ty /= (theight / 64.0)
            l[uv_layer].uv[0] = tx
            l[uv_layer].uv[1] = ty + 1
            s += 1
        f.select = False

    #done!
    bpy.ops.object.mode_set(mode='OBJECT')

    if fixVerts:
        #cleanup cleanup (everybody do your share)
        bpy.context.view_layer.objects.active = object
        bpy.ops.object.mode_set(mode='EDIT')
        bpy.ops.mesh.select_all(action='SELECT')
        bpy.ops.mesh.remove_doubles(threshold = merge_threshold)
        bpy.ops.mesh.select_all(action='DESELECT')
        bpy.ops.mesh.select_mode(type = 'FACE')
        bpy.ops.mesh.select_interior_faces()
        bpy.ops.mesh.delete(type='FACE')
        bpy.ops.object.mode_set(mode='OBJECT')
    return object

from glob import glob

for model in glob(silly+"assets/chameleons/Davy/**/*.gfx.inc.c", recursive=True):
    print(model)
    start(model)