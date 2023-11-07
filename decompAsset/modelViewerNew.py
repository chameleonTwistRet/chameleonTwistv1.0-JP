import os
import bpy
import shutil
import bmesh

silly = '//wsl$/Ubuntu/root/RealCT/'
assetDir = 'assets/'
toUse = 'model/BombSnake/arenaWalls/arenaWalls.gfx.inc.c'

fullDir = silly + assetDir + toUse

yamler = 'chameleontwist.jp.yaml'
yamlDir = silly + yamler

#shouldnt need this
if os.path.exists("C:/assets/"):
    shutil.rmtree("C:/assets/")
#

files = []

scale = 100.0

objdata = {
    'verts': [],
    'bank': [],
    'uvs': [],
    'uvAssigns': [],
    'faces': [],
    'textures': [],
}


def dumpGfx(path):
    toTrack = {
        'mtx': ['gsSPMatrix'],
        'txt': ['gsDPLoadTextureTile_4b','gsDPLoadTextureTile'],
        'pal': ['gsDPLoadTLUT_pal256'],
        'vtx': ['gsSPVertex'],
        'tri': ['gsSP1Triangle'],
    }


    lines = open(path).readlines()
    fileList = []
    for line in lines:
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

def bankParse(adr):
    segadr = adr[2:10]
    group = adr[11:]
    
    arrs = []
    while group[-1] == "]":
        arrs.append(int(group[-3:][1:-1]))
        group = group[:-3]
    arrs.reverse()
    if segadr[0:2] == "02":
        group = "Global"
    return {"D_": adr[0:2],
            "Address": segadr,
            "Group": group,
            "Args": arrs}

def start(toUser):
    print(toUser)
    namer = toUser.split("/")[-1].split('.')[0]
    yamling = open(yamlDir).readlines()

    mesh = bpy.data.meshes.new("model")
    object = bpy.data.objects.new("model", mesh)
    bpy.context.collection.objects.link(object)
    files = dumpGfx(fullDir)
    for file in files:
        allArgs = file["Full"].replace(file["Indicator"], "", 1)[1:-3] #only the goods
        print(allArgs)
        if allArgs[0] == "&": allArgs = allArgs[1:]
        args = allArgs.split(",")
        fileName = ""
        cmdAdr = 0
        trueAdr = 0
        needsFile = not file["Command"] in ["tri", "mtx"]
        if needsFile:
            contextAddress = bankParse(args[0])
            cmdAdr = int(contextAddress["Address"][2:], 16) #the address within the group
            i = 0
            mode = 0
            while i < len(yamling): #scan
                line = yamling[i]
                if line.find("name: " + contextAddress["Group"]) != -1 and mode == 0:
                    #found the group!
                    #we now start going backwards to get the group's rom addr
                    mode = 1
                elif mode == 1 and line.find("start: ") != -1:
                    #we found the group's rom addr
                    #we add that to the command address to get the rom address of the resource
                    #we start going forward again to find said resource
                    cmdAdr += int(line.split(":")[-1].split("#")[0].strip(), 16)
                    mode = 2
                elif mode == 2:
                    validAdr = line.lower().find(hex(cmdAdr)) > -1
                    validResource = line.find(namer) + line.find(file["Command"]) >= -1
                    validSplit = line.find("{") + line.find("[") >= -1
                    if (validAdr or validResource) and validSplit:
                        #we found the split containing the resource we need!
                        #lets get the file path and the actual address we got. (just in case cmdAdr wasnt correct)
                        if line.find("name:") != -1: fileName = line.split("name: ")[1][:-1].replace("{", "").replace("}", "")
                        else: fileName = line.split(", ")[2]
                        if line.find("start:") != -1: trueAdr = int(line.split("start: ")[1].split(", ")[0], 16)
                        else: trueAdr = int(line.split(", ")[0].split('[')[1], 16)
                        break
                if mode in [0, 2]: i += 1
                elif mode == 1: i -= 1
            #begin the data usage.
            if file["Command"] == "vtx": #if resource is vertex data
                fileData = open(silly+assetDir+"/"+fileName+".vtx.inc.c").readlines()
                bank = int(args[2])
                while len(objdata['bank']) < bank: objdata['bank'].append(0)#fill bank
                
                ao = int(args[1])
                i = 0
                offset = int((cmdAdr - trueAdr) / 0x10) #into VTX, as some calls start a specifie amount into the file.
                i += offset
                started = False
                if fileData[0].find("}") == -1: #if there's a symbol at the start :)
                    started = True
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
                shutil.copyfile(silly + assetDir + "/" + fileName + ".png", copyTo)
                #

                texImage.image = bpy.data.images.load(copyTo)
                matthew.node_tree.links.new(bsdf.inputs['Base Color'], texImage.outputs['Color'])
                object.data.materials.append(matthew)
                objdata['textures'].append([len(objdata['textures']), matthew])
        elif file["Command"] == "tri": #if resource is tri data
            tri = []
            for a in range(0,3): tri.append(objdata['bank'][int(args[a])])
            objdata["faces"].append(tri)
            objdata['uvAssigns'].append(objdata['textures'][- 1][0])


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
        get = objdata['uvAssigns'][i]
        object.active_material_index = get
        bpy.ops.object.material_slot_assign()
        bm.faces[i].select = False
        i += 1


    #set uv coords
    uv_layer = bm.loops.layers.uv.verify()
    i = 0
    while i < len(bm.faces):
        f = bm.faces[i]
        f.select = True
        bpy.ops.uv.unwrap()
        getVerts = objdata["faces"][i]
        text = object.data.materials[objdata['uvAssigns'][i]].node_tree.nodes.get("Principled BSDF").inputs['Base Color'].links[0].from_node.image
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
            #l[uv_layer].uv = (l[uv_layer].uv[0], l[uv_layer].uv[1] + 1)
        f.select = False
        i += 1

    #done!
    bpy.ops.object.mode_set(mode='OBJECT')


    fixVerts = True
    if fixVerts:
        #cleanup cleanup (everybody do your share)
        bpy.context.view_layer.objects.active = object
        merge_threshold = 0.05 # here you can define Merge By Distance threshold
        bpy.ops.object.mode_set(mode='EDIT')
        bpy.ops.mesh.select_all(action='SELECT')
        bpy.ops.mesh.remove_doubles(threshold = merge_threshold)
        bpy.ops.mesh.select_all(action='DESELECT')
        bpy.ops.mesh.select_mode(type = 'FACE')
        bpy.ops.mesh.select_interior_faces()
        bpy.ops.mesh.delete(type='FACE')
        bpy.ops.object.mode_set(mode='OBJECT')
    return object

start(toUse)