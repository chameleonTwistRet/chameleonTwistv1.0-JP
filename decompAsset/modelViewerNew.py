import os
import bpy
import shutil
import bmesh

silly = '//wsl$/Ubuntu/root/NathaCT/'
assetDir = 'assets/'


yamler = 'chameleontwist.jp.yaml'
yamlDir = silly + yamler

symbler = 'symbol_addrs.txt'
symbolDir = silly + symbler

symbols = {}

#get all symbols
for line in open(symbolDir, "r", encoding="utf-8").readlines():
    symbol = line.strip()
    if symbol == "" or symbol.startswith("//"): continue
    divide = symbol.split("; // ")
    if len(divide) < 2: continue
    important = divide[0].split(" = ")
    name = important[0].strip()
    vram = important[1].strip()
    symbols[name] = {"vram": vram}
    meta = divide[1].split(" ")
    for entry in meta:
        data = entry.split(":")
        if len(data) < 2: continue
        symbols[name][data[0]] = data[1]

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

def dumpGfx(path):
    toTrack = {
        'txt': ['gsDPLoadTextureTile_4b','gsDPLoadTextureTile'],
        'vtx': ['gsSPVertex'],
        'tri': ['gsSP1Triangle'],
    }

    fileList = []
    for line in open(path).readlines():
        line = line[4:]
        for gfxCommand in list(toTrack.keys()):
            isValid = False
            for indicator in toTrack[gfxCommand]:
                if line.find(indicator) != -1:
                    fileList.append({
                        "Command": gfxCommand,
                        "Full": line,
                        "Indicator": indicator})
                    isValid = True
                    break
            if isValid: break
    return fileList

def start(toUser):
    funName = toUser.split("/")[-1].split(".gfx")[0]
    
    yamling = open(yamlDir).readlines()

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
    object.name = funName
    bpy.context.collection.objects.link(object)

    files = dumpGfx(toUser)
    for file in files:
        allArgs = file["Full"].replace(file["Indicator"], "", 1)[1:-3] #only the goods
        if allArgs.startswith("&"): allArgs = allArgs[1:]
        args = allArgs.split(",")
        symbolname = args[0]
        arrayPos = 0
        if symbolname.endswith("]"):
            dats = symbolname.split("[")
            symbolname = dats[0]
            arrayPos = int(dats[1].split("]")[0])
        needsFile = not file["Command"] in ["tri"]
        if needsFile:
            getAddr = symbols[symbolname]["rom"]
            fileName = ""
            dir = ""
            spaces = ""
            for line in yamling:
                if line.find("dir:") != -1:
                    data = line.split("dir: ")
                    cspaces = data[0]
                    dirg = data[1].split("#")[0].strip() + "/"
                    if len(cspaces) > len(spaces): dir += dirg
                    else: dir = dirg
                    spaces = cspaces
                if line.lower().find(getAddr.lower()) != -1:
                    fileName = dir+line.split(",")[2].split("]")[0].strip()
                    break
            fileName = silly+assetDir+fileName
            #begin the data usage.
            if file["Command"] == "vtx": #if resource is vertex data
                newFileName = fileName+".vtx.inc.c"
                fileData = open(newFileName).readlines()
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
                smallName = fileName.split("/")[-1]
                matthew = bpy.data.materials.new(name=smallName)
                matthew.use_nodes = True
                
                bsdf = matthew.node_tree.nodes["Principled BSDF"]
                texImage = matthew.node_tree.nodes.new('ShaderNodeTexImage')
                #these shouldnt be needed
                copyTo = "C:/assets/" + fileName + ".png"
                makerTo = "C:/assets/" + fileName.replace(smallName, "")
                if not os.path.exists(makerTo):os.makedirs(makerTo)
                shutil.copyfile(fileName + ".png", copyTo)
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
            tri = []
            for a in range(0,3): tri.append(objdata['bank'][int(args[a])])
            objdata["faces"].append(tri)
            objdata['uvAssigns'].append(objdata['textures'][-1] if len(objdata['textures']) >= 1 else 0)


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




startu = silly+assetDir+"chameleons/Davy/"
endu = "*/*.gfx.inc.c"
from glob import glob


print(startu+endu)
for gfx in glob(startu+endu, recursive=True):
    print(gfx)
    start(gfx)