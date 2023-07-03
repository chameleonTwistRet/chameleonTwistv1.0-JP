import os
import json
import bpy
import shutil
import bmesh

silly = '//wsl$/Ubuntu/root/RealCT/'
assetDir = 'assets/'
toUse = 'chameleons/Davy/body/body.gfx.inc.c'
namer = toUse.split("/")[len(toUse.split("/")) - 1].split('.')[0]

yamler = 'chameleontwist.jp.yaml'
fullDir = silly + assetDir + toUse
yamlDir = silly + yamler

#shouldnt need this
if os.path.exists("C:/assets/"):
    shutil.rmtree("C:/assets/")
#

byteLimit = {
    "1": 128,
    "2": 32768,
    "4": 2147483648,
}
def hexToNum(input, limit, signed):
    inter = int(input, 16)
    maxer = byteLimit[str(limit)] * 2
    halfer = byteLimit[str(limit)]
    if signed:
        while inter >= halfer:
            inter -= maxer
        while inter < -halfer:
            inter += maxer
    else:
        while inter >= maxer:
            inter -= maxer
        while inter < -maxer:
            inter += maxer
    return inter

def bankParse(adr):
    d = adr[0:2]
    segadr = adr[2:10]
    group = adr[11:len(adr)]
    
    arrs = []
    while group[len(group) - 1] == "]":
        strs = group[len(group) - 3:]
        arrs.append(int(strs[1:len(strs) - 1]))
        group = group[:len(group) - 3]
    arrs.reverse()
    if segadr[0:2] == "02":
        group = "Global"
    return [d, segadr, group, arrs]



toTrack = {
'mtx': ['gsSPMatrix'],
'txt': ['gsDPLoadTextureTile_4b','gsDPLoadTextureTile'],
'pal': ['gsDPLoadTLUT_pal256'],
'vtx': ['gsSPVertex'],
'tri': ['gsSP1Triangle'],
}
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



def start(toUser):
    toUse = toUser
    namer = toUse.split("/")[len(toUse.split("/")) - 1].split('.')[0]
    lines = open(fullDir).readlines()
    yamling = open(yamlDir).readlines()

    mesh = bpy.data.meshes.new("model")
    object = bpy.data.objects.new("model", mesh)
    bpy.context.collection.objects.link(object)

    for each in lines:
        for typee in list(toTrack.keys()):
            command = each[4:]
            for typer in toTrack[typee]:
                if command.find(typer) != -1 :
                    files.append([typee, each[4:], typer])
                    break
    for each in files:
        if each[0] == 'vtx':
            print(each[1])
    for file in files:
        doinks = file[0]
        args = file[1].replace(file[2], "", 1)
        args = args[1:len(args) - 3]
        if args[0] == "&":
            args = args[1:]
        csv = args.split(", ")
        fileName = ""
        cmdAdr = 0
        trueAdr = 0
        if doinks != "tri" and doinks != "mtx":
            new = bankParse(csv[0])
            cmdAdr = int(new[1][2:], 16)
            i = 0
            mode = 0
            while i < len(yamling):
                yammy = yamling[i]
                if yammy.find("name: " + new[2]) != -1 and mode == 0:
                    mode = 1
                elif mode == 1 and yammy.find("start: ") != -1:
                    adrget = yammy.split(":")
                    adr1 = adrget[len(adrget) - 1].strip()
                    cmdAdr += int(adr1, 16)
                    mode = 2
                elif mode == 2:
                    validAdr = yammy.lower().find(hex(cmdAdr)) != -1 or (yammy.find(namer) != -1 and yammy.find(doinks) != -1)
                    validSplit = yammy.find("{") != -1 or yammy.find("[") != -1
                    if validAdr and validSplit:
                        if yammy.find("name:") != -1:
                            fileName = yammy.split("name: ")[1]
                            fileName = fileName[:len(fileName) - 1].replace("{", "").replace("}", "")
                        else:
                            fileName = yammy.split(", ")[2]
                        if yammy.find("start:") != -1:
                            trueAdr = int(yammy.split("start: ")[1].split(", ")[0], 16)
                        else:
                            trueAdr = int(yammy.split(", ")[0].split('[')[1], 16)
                        break
                if mode == 0 or mode == 2:
                    i += 1
                elif mode == 1:
                    i -= 1
        if fileName != "":
            if doinks == "vtx":
                fileData = open(silly + assetDir + "/" + fileName + ".vtx.inc.c").readlines()
                bank = int(csv[2])
                while len(objdata['bank']) < bank:
                    objdata['bank'].append(0)
                
                ao = int(csv[1])
                i = 0
                offset = int((cmdAdr - trueAdr) / 0x10) #into VTX
                i += offset
                started = False
                if fileData[0].find("}") == -1: #if there's a symbol at the start :)
                    started = True
                while i < ao + offset:
                    line = fileData[i + int(started)]
                    get = line.replace("}", "").replace("{", "").split(",")
                    x = -int(get[0].strip()) / scale
                    y = int(get[1].strip()) / scale
                    z = int(get[2].strip()) / scale
                    objdata["verts"].append([x, z, y])
                    id = len(objdata["verts"]) - 1
                    if len(objdata['bank']) < bank + 1:
                        objdata['bank'].append(id)
                    else:
                        objdata['bank'][bank] = id
                    uvx = int(get[4].strip())
                    uvy = int(get[5].strip())
                    objdata["uvs"].append([uvx, uvy])
                    i += 1
                    bank += 1
                
            elif doinks == "txt":
                smallName = fileName.split("/")
                smallName = smallName[len(smallName) - 1]
                matthew = bpy.data.materials.new(name=smallName)
                matthew.use_nodes = True
                
                bsdf = matthew.node_tree.nodes["Principled BSDF"]
                texImage = matthew.node_tree.nodes.new('ShaderNodeTexImage')
                #these shouldnt be needed
                copyTo = "C:/assets/" + fileName + ".png"
                makerTo = "C:/assets/" + fileName.replace(smallName, "")
                if not os.path.exists(makerTo):
                    os.makedirs(makerTo)
                shutil.copyfile(silly + assetDir + "/" + fileName + ".png", copyTo)
                #
                texImage.image = bpy.data.images.load(copyTo)
                matthew.node_tree.links.new(bsdf.inputs['Base Color'], texImage.outputs['Color'])
                object.data.materials.append(matthew)
                objdata['textures'].append([len(objdata['textures']), matthew])
        elif doinks == "tri":
            t1 = objdata['bank'][int(csv[0])]
            t2 = objdata['bank'][int(csv[1])]
            t3 = objdata['bank'][int(csv[2])]
            objdata["faces"].append([t1, t2, t3])
            objdata['uvAssigns'].append(objdata['textures'][len(objdata['textures']) - 1][0])


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

start(toUse)