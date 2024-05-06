import glob
import os
import struct
from copy import *
from struct import *
import bpy
from sys import path
decompAsset = "//wsl.localhost/Ubuntu/root/RealCT/decompAsset/"
path.append(os.path.abspath(decompAsset))
import modelViewerNew

actorDir = {
	"Actor_Null": [0],
    #dir, [w, h], directions, framesPer,
	"Red_Ant": [["/assets/img/caterpillar.ci8", [40, 40], 12, 2]],
	"Green_Ant": [["/assets/img/greenAntTop.ci8", [40, 40], 2, 6], ["/assets/img/greenAntBottom.ci8", [40, 40], 8, 4]],
	"Grey_Ant": [["/assets/img/caterpillar.ci8", [40, 40], 6, 4]],
	"Bullet_Hell_Ant": ["Grey_Ant"],
	"Ant_Trio": ["Grey_Ant"],
	"Yellow_Ant": ["MODEL"],
	"Ant_Queen": ["MODEL"],
	"Ant_Queen_Ant": ["Grey_Ant"],
	"Grey_Ant_Spawner": [1],
	"Ant_Trio_Spawner": [1],
	"Bullet_Hell_Ant_Spawner": [1],
	"Red_Ant_Spawner": [1],
	"WHITE_BOMB": [["/assets/img/caterpillar.ci8", [40, 40], 1, 3]],
	"Grenade": [["/assets/img/grenade.ci8", [40, 40], 12, 3]],
	"Missile_Spawner": [1],
	"Missile": [["/assets/img/missile.ci8", [40, 40], 12, 1]],
	"Cannon": ["MODEL"],
	"Cannonball": [["/assets/img/blackBall.ia4", [32, 32], 1, 1]],
	"BL_Boss_Segment": [["/assets/img/bombSnakeParts.ci8", [40, 40], 1, 12]],
	"Explosion": [["/assets/img/explode.ia4", [40, 40], 1, 1]],
	"BL_Boss_Bombs": [["/assets/img/bomb.ci8", [40, 40], 1, 3]],
	"Black_Chameleon_Projectile_Spawner": [1],
	"Black_Chameleon_Projectile": ["Bowling_Ball"],
	"Chomper": ["MODEL"],
	"Sand_Crab": [["/assets/img/sandCrab.ci8", [40, 40], 12, 2]],
	"Vulture": [["/assets/img/condor.ci8", [40, 40], 2, 3]],
	"Arrow_Spawner": [1],
	"Arrows": ["MODEL"],
	"Boulder": ["MODEL"],
	"Armadillo": ["MODEL"],
	"unk_1F": [2],
	"Popcorn": [["/assets/img/popcorn.ci8", [40, 40], 1, 1]],
	"Pogo": ["MODEL"],
	"unk_22": [2],
	"unk_23": [2],
	"Ice_Cream_Sandwich": [["/assets/img/iceCreamSandwich.ci8", [40, 40], 1, 4]],
	"Training_Room_Choco_Kid": ["Choco_Kid"],
	"Cake_Boss": ["MODEL"],
	"Cake_Boss_Strawberry": ["MODEL"],
	"unk_28": [2],
	"Cake_Boss_Choco_Kid": ["Choco_Kid"],
	"Bowling_Ball": [["/assets/img/ball.ia8", [64, 64], 1, 2]],
	"Bowling_Pins": ["MODEL"],
	"Cue_Ball": ["Bowling_Ball"],
	"Billiards_Ball": ["Bowling_Ball"],
	"unk_2E": [2],
	"unk_2F": [2],
	"Cup": [["/assets/img/kettle.ia4", [40, 40], 1, 3]],
	"Saucer": [["/assets/img/plate.ia4", [40, 40], 1, 3]],
	"Metal_Sheet": ["MODEL"],
	"Scroll": ["MODEL"],
	"RNG_Room_Spawner": [1],
	"Mirror": ["MODEL"],
	"Barrel_Jump_Fire_Spawner": [1],
	"Barrel_Jump_Fire": ["Fire"],
	"Fire_Spitter": ["MODEL"],
	"Candles": [["/assets/img/candle.ia4", [32, 56], 1, 1]],
	"Fire_Spawner": [1],
	"Fire": [["/assets/img/fireSprite.ci8", [40, 40], 1, 6]],
	"Sandal": ["MODEL"],
	"Pile_of_Books": ["MODEL"],
	"Pile_of_Books_Arm_Segments": ["Bowling_Ball"],
	"Pile_of_Books_Arm_Spitter": ["Fire_Spitter"],
	"Pile_of_Books_Projectile": ["Bowling_Ball"],
	"Spider_Spawner": [1],
	"Spider": [["/assets/img/spider.ci8", [40, 40], 4, 4]],
	"Spider_Trio": ["Spider"],
	"Golem": ["MODEL"],
	"Hedgehog": [["/assets/img/porcupine.ci8", [40, 40], 6, 2]],
	"Fish": ["MODEL"],
	"Lizard_Kong_Butterfly": [["/assets/img/butterfly.ci8", [40, 40], 12, 4]],
	"Golem_Room_Spider_Spawner": [1],
	"Lizard_Kong_Butterfly_Spawner": [1],
	"Lizard_Kong_Boulder": ["MODEL"],
	"Lizard_Kong": ["MODEL"],
	"Popcorn_Bucket_Spawner": [1],
	"Popcorn_Bucket": ["MODEL"],
	"unk_4E": [2],
	"Choco_Kid_Spawner": [1],
	"Choco_Kid": [["/assets/img/chocoKid.ci8", [40, 40], 6, 4]],
	"unk_51": [2],
	"unk_52": [2],
	"Battle_Mode_Sand_Crab_Spawner": [1],
	"Battle_Mode_Sand_Crab": ["Sand_Crab"],
	"unk_55": [2],
	"Battle_Mode_Fire": ["Fire"],
	"Battle_Mode_Saucer_Spawner": [1],
	"Battle_Mode_Saucer": ["Saucer"],
	"unk_59": [2],
	"unk_5A": [2],
	"Power_Up_Spawner": [1],
	"Falling_Grey_Ant_Spawner": [1],
	"Falling_Grey_Ant": ["Grey_Ant"],
	"unk_5E": [2],
	"R_Heart": [["/assets/img/redHeart.ci8", [40, 40], 1, 1]],
	"Falling_R_Heart": ["R_Heart"],
	"O_Heart": [["/assets/img/orangeHeart.ci8", [40, 40], 1, 1]],
	"Y_Heart": [["/assets/img/yellowHeart.ci8", [40, 40], 1, 1]],
	"Crown": [["/assets/img/crown.ci8", [48, 40], 1, 1]],
	"Carrot": [["/assets/img/carrot.ci8", [40, 40], 1, 1]],
	"unk_65": [2],
	"Time_Stop_Power_Up": [["/assets/img/stopWatch.ci8", [40, 40], 1, 16]],
	"Big_Feet_Power_Up": [["/assets/img/powerup1.ci8", [40, 40], 1, 3]],
	"Big_Head_Power_Up": [["/assets/img/powerup2.ci8", [40, 40], 1, 3]],
	"Shrink_Power_Up": [["/assets/img/powerup3.ci8", [40, 40], 1, 3]],
	"Shrink_Enemy_Power_Up": [["/assets/img/powerup4.ci8", [40, 40], 1, 3]],
}
def toStrings(input):
    dataS = []
    i = 0
    while i < len(input):
        b0 = hex(input[i]).replace("0x", "").zfill(2)
        b1 = hex(input[i + 1]).replace("0x", "").zfill(2)
        b2 = hex(input[i + 2]).replace("0x", "").zfill(2)
        b3 = hex(input[i + 3]).replace("0x", "").zfill(2)
        b17bomber = b0 + b1 + b2 + b3
        dataS.append(b17bomber.upper())
        i += 4
    return dataS

def getDataFromInc(file):
	data = []
	lines = open(file, "r", encoding="utf-8").readlines()
	i = 0
	while i < len(lines):
		if lines[i].find(",") == -1:
			lines.pop(i)
			continue
		i += 1
	for numbah in lines:
		parse = numbah.replace(",", "").strip()
		if parse.find(".") != -1:
			data.append(float(parse))
		else:
			data.append(int(parse))
	return data

def getStruct(structName, ContextFile):
    copy = False
    vars = []
    typesList = ""
    for line in open(ContextFile, "r").readlines():
        if line.strip() == "} "+structName+";" and copy:
            break
        if copy:
            type = line.strip().split(" ")
            type[1] = type[1].replace(";", "")
            vars.append(type)
        if line.strip() == "typedef struct "+structName+" {" and not copy:
            copy = True
    return vars


def cStructToUnpackString(structName, ContextFile, readFrom, unsignedAsHex):
    copy = False
    vars = []
    typesList = ""
    for line in open(ContextFile, "r").readlines():
        if line.strip() == "} "+structName+";" and copy:
            break
        if copy:
            type = line.strip().split(" ")
            type[1] = type[1].replace(";", "")
            unsigned = type[0].startswith("u") and not type[0].startswith("s")
            sizes = {
            8: "b",
            16: "h",
			32: "l",
			}
            size = int(type[0][1:])
            lettoi = sizes[size]
            if unsigned:
                lettoi = lettoi.upper()
            typesList += lettoi
            vars.append(type)
        if line.strip() == "typedef struct "+structName+" {" and not copy:
            copy = True
    data = []
    if readFrom.endswith(".bin"):
        byteData = open(readFrom, "rb").read()
        data = struct.unpack('>' + typesList, byteData)
    elif readFrom.endswith(".inc.c"):#just needs the variable names
        lines = open(readFrom, "r").readlines()
        i = 0
        while i < len(lines):
            if lines[i].find(",") == -1:
                lines.pop(i)
                continue
            i += 1
        for numbah in lines:
            parse = numbah.replace(",", "").strip()
            if parse.find(".") != -1:
                data.append(float(parse))
            else:
                data.append(int(parse))
    theGamer = {}
    i = 0
    while i < len(vars):
        holdType = vars[i][0]
        vars[i][0] = data[i]
        if holdType.startswith("u") and not holdType.startswith("s"):#is unsigned
            if unsignedAsHex:
                vars[i][0] = hex(vars[i][0]).upper().replace("X", "x")
        theGamer[vars[i][1]] = vars[i][0]
        i += 1
    return theGamer


#make both of these support dicts and lines at the same time
def getAddrFromSegName(name, yamler):
    fail = open(yamler, "r", encoding="utf-8").readlines()
    i = 0
    hasName = 0
    while i < len(fail):
        line = fail[i]
        if hasName == 0:
            hasName = int(line.find("name: "+name) != -1 or line.find(", "+name+"]") != -1)
            if hasName == 1:
                continue
        elif hasName == 1:
            i -= 1
            hasName += 1
            continue
        elif hasName == 2:
            return int(line.split("start: ")[1].strip(), 16)
        i += 1

def getFileFromSegAddr(addr, yamler):
    fail = open(yamler, "r", encoding="utf-8").readlines()
    i = 0
    found = 0
    while i < len(fail):
        line = fail[i]
        if found == 0:
            found = int(line.find("start: "+addr) != -1 or line.find("["+addr+",") != -1)
            if found == 1:
                continue
        elif found == 1:
            return [line.split(",")[-1].replace("]", "").replace("}", "").strip(), i]
        i += 1
        
def continueYamlUntil(line, yamler, breakers, inclusive = True):
    fail = open(yamler, "r", encoding="utf-8").readlines()
    i = line
    content = []
    found = 0
    while i < len(fail):
        line = fail[i]
        if found == 0:
            for each in breakers:
                result = line.find(each) != -1 if inclusive else line.find(each) == -1
                found += int(result)
            if found >= 1:
                continue
        elif found >= 1:
            break
        content.append(line)
        i += 1
    return content

def pointerRead(pointerPointer):
    pointer = []
    list = toStrings(open(pointerPointer, "rb").read())
    while len(list) > 0:
        pointer.append([list.pop(0), list.pop(0)])
        i = 10
        while i > 0:
            list.pop(0)
            i -= 1
    return pointer

yamler = decompAsset + "../chameleontwist.jp.yaml"
level = decompAsset + "../assets/model/JungleLand/"
common_structs = decompAsset + "../include/common_structs.h"
headerData = cStructToUnpackString("LevelHeader", common_structs, level + "header.lvlHdr.inc.c", True)
pointers = pointerRead(level + "pointers.bin")
banks = {
    "03": ["JungleLand", int(getAddrFromSegName("JungleLand", yamler))],
    "02": ["Global", int(getAddrFromSegName("Global", yamler))],
}

overworldRoomsFiles = glob.glob(level + "extRooms/*", recursive = True)
i = 0
while i < len(overworldRoomsFiles):
    s = int(overworldRoomsFiles[i].split("\\")[1].split(".")[0].replace("extRoom", ""))
    j = i + 1
    if j < len(overworldRoomsFiles):
        x = int(overworldRoomsFiles[j].split("\\")[1].split(".")[0].replace("extRoom", ""))
        if s > x:
            overworldRoomsFiles.insert(j, overworldRoomsFiles.pop(i))
            continue
    j = i - 1
    if j >= 0:
        x = int(overworldRoomsFiles[j].split("\\")[1].split(".")[0].replace("extRoom", ""))
        if s < x:
            overworldRoomsFiles.insert(j, overworldRoomsFiles.pop(i))
            i -= 1
            continue
    i += 1
oRD = []
for i in overworldRoomsFiles:
    oRD.append(cStructToUnpackString("RoomSettings", common_structs, i, True))


OVROOMS = []

for data in oRD:
    dict = {
		"RoomObjects": [],



	}

    roomAdrVal = int(data["RoomObjectsPointer"].replace("0x3", "", 1), 16)
    if roomAdrVal != 0:
        find = hex(banks["03"][1] + roomAdrVal)
        returndata = getFileFromSegAddr(find, yamler)
        allAfter = continueYamlUntil(returndata[1], yamler, ["roomObject"], False)
        for segment in allAfter:
            fullName = decompAsset + "../assets/" + segment.split(",")[-1].replace("]", "").strip() + ".roomObj.inc.c"
            dict["RoomObjects"].append(fullName)
        for segment in dict["RoomObjects"]:
            print(segment)
    
    OVROOMS.append(dict)

#wrap this with each room in the list
select = OVROOMS[0]
hold = []
for object in select["RoomObjects"]:
    #grahhh it doesnt work with custom structs!!!!!!lines = open(readFrom, "r").readlines()
    data = getDataFromInc(object)
    cData = getStruct("RoomObject", common_structs)
    dictA = {}
    i = 0
    while i < len(data):
        correlated = cData[i]
        actual = data[i]
        if correlated[0].startswith("Vec3"):
            data[i] = [data[i], data.pop(i + 1), data.pop(i + 1)]
        dictA[correlated[1]] = data[i]
        i += 1
    
    hold.append(dictA)
    print(dictA)
select["RoomObjects"] = hold
for object in select["RoomObjects"]:
    gfx = pointers[object["id"]][0]#gfx
    bank = gfx[:2]
    gfx = gfx[2:]
    adr = hex(banks[bank][1] + int(gfx, 16))
    returndata = getFileFromSegAddr(adr, yamler)
    fullName = returndata[0].replace("name: ", "") + ".gfx.inc.c"
    #call modelViewerNew to render the object and place it in blender
	#VVVVVVV THIS SUCKS PLS FIX
    objectBPY = modelViewerNew.start(fullName)
    #set the object's location in blender here
    objectBPY.location = (object["position"][0], object["position"][1], object["position"][2])