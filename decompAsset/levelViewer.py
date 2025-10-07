import math

#this shouldnt exist
import sys
silly = '//wsl$/Ubuntu/root/NathaCT/'
scripts = silly+"decompAsset/"
if not scripts in sys.path:
    sys.path.append(scripts)

import modelViewer

#modelViewerNew.start(silly+"mod/chameleons/Linda/head/head.gfx.inc.c")
levelC = "src/levelGroup/AntLand.c"
levelLines = open(silly+levelC, "r", encoding="utf-8").readlines()

levelC_G = "src/levelGroup/Global.c"
levelLines_G = open(silly+levelC_G, "r", encoding="utf-8").readlines()

def getThing(symbol, globaler=False):
    useLines = []
    if globaler: useLines = levelLines_G
    else: useLines = levelLines
    moreLines = []
    reading = False
    for i in useLines:
        if i.find(symbol) != -1 and i.find(" = ") != -1 and not reading:
            reading = True
        if reading:
            moreLines.append(i)
            if i.find("};") != -1:
                break
    return moreLines

def cleanSymbol(symbol):
    symbol = symbol.split("//")[0].strip().replace(",","")
    symbol = symbol.split("[")[0].replace("&","")
    return symbol

stageData = getThing("StageData ")
stageExtRoomsSymbol = cleanSymbol(stageData[2])
stageModelsSymbol = cleanSymbol(stageData[3])
stageSpriteLibSymbol = cleanSymbol(stageData[8])

stageModelsEnum = []


stageModels = getThing(stageModelsSymbol+"[")
#cleanup
stageModels.pop(0)
stageModels.pop(-1)
i = 0
while i < len(stageModels):
    newI = stageModels[i].split(",")
    newI = [cleanSymbol(newI[0].replace("{","")), cleanSymbol(newI[1])]
    
    file = getThing(newI[0], newI[0].find("Global_") != -1)
    fileGfx = file[1].split('#include "')[-1].split('"')[0]
    
    #collision isnt actually a file since its basically a list of pointers
    #fix later
    file = getThing(newI[1], newI[1].find("Global_") != -1)
    fileCollision = file[1].split('#include "')[-1].split('"')[0]
    
    newI = [fileGfx, fileCollision]
    
    stageModels[i] = newI
    i += 1



stageExtRooms = getThing("RoomInstance "+stageExtRoomsSymbol)
stageExtRooms.pop(0)
stageExtRooms.pop(-1)
#for cutscene rooms or just rooms you dont want showing up
blacklist = [0, -1]
for roomNum in blacklist:
    stageExtRooms.pop(roomNum)

for room in stageExtRooms:
    actualRoom = room.replace("{","").replace("}","").split("//")[0].split(",")
    i = 0
    while i < len(actualRoom):
        actualRoom[i] = actualRoom[i].strip()
        i += 1
    actualRoom.pop(-1) #\n
    
    if actualRoom[0] != "NULL":
        roomObjects = getThing("RoomObject "+actualRoom[0])
        roomObjects.pop(0) #symbol def
        roomObjects.pop(-1) #};
        roomObjects.pop(-1) #null object
        
        for roomObject in roomObjects:
            actualRoomObject = roomObject.split("{", 1)[-1].split("},\n")[0].split(",")
            i = 0
            while i < len(actualRoomObject):
                actualRoomObject[i] = actualRoomObject[i].strip()
                i += 1
                
            position = actualRoomObject[0:3]
            i = 0
            while i < len(position):
                position[i] = float(position[i].replace("{","").replace("}","")) / 100.0
                i += 1
                
            scale = actualRoomObject[3:6]
            i = 0
            while i < len(scale):
                scale[i] = float(scale[i].replace("{","").replace("}",""))
                i += 1
                
            rotation = actualRoomObject[6:8]
            axis = int(rotation[0])
            deg = float(rotation[1].split("(")[-1].split(")")[0])
            euler = [0, 0, 0]
            if axis != 0:
                euler[axis-1] = math.radians(deg)
            
            
            
            enumObject = actualRoomObject[20].find("_") != -1
            if enumObject:
                if stageModelsEnum == []:
                    moreLines = []
                    way = 1
                    reading = False
                    i = 0
                    while i < len(levelLines):
                        line = levelLines[i]
                        if line.find(actualRoomObject[20]) != -1 and way == 1 and not reading:
                            way = -1
                        if way == -1 and not reading and line.find("enum ") != -1:
                            way = 1
                            reading = True
                            i += way
                            continue
                        if reading:
                            if line.find("};") != -1:
                                break
                            moreLines.append(line.split("=")[0].strip().replace(",",""))
                        i += way
                    stageModelsEnum = moreLines
            objectId = -1
            if enumObject:
                objectId = stageModelsEnum.index(actualRoomObject[20])
            else:
                objectId = int(actualRoomObject[20])
            
            modelToRender = silly+stageModels[objectId][0]
            
            object = modelViewer.start(modelToRender)
            object.location = (-position[0], position[2], position[1])
            object.scale = (scale[0], scale[2], scale[1])
            object.rotation_euler = (euler[0], euler[2], euler[1])
            
            
    
        