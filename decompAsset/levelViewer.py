import glob
import struct
from copy import *
import modelViewerNew.py

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
	"White_Bomb_Snake": [["/assets/img/caterpillar.ci8", [40, 40], 1, 3]],
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








spriteActor = {
    "size": ["int", 4, True],
    "spriteIndex": ["int", 4, True],
    "x": ["float"],
    "y": ["float"],
    "z": ["float"],
    "xScale": ["float"],
    "yScale": ["float"],
    "zScale": ["float"],
    "unk20": ["int", 4, True],
    "unk24": ["int", 4, True],
    "unk28": ["float"],
    "hurts": ["int", 4, True],
    "unk30": ["int", 4, True],
    "unk34": ["int", 4, True],
    "unk38": ["int", 4, True],
    "unk3C": ["int", 4, True],
    "r": ["int", 4, False],
    "g": ["int", 4, False],
    "b": ["int", 4, False],
    "a": ["int", 4, False],
}
specialActor = {
    "id": ["int", 4, True],
    "x": ["float"],
    "y": ["float"],
    "z": ["float"],
    "unk10": ["int", 4, True],
    "unk14": ["int", 4, True],
    "unk18": ["int", 4, True],
    "unk1C": ["int", 4, True],
}
roomObject = {
    "x": ["float"],
    "y": ["float"],
    "z": ["float"],
    "xScale": ["float"],
    "yScale": ["float"],
    "zScale": ["float"],
    "unk18": ["int", 4, True],
    "hurts": ["int", 4, True],
    "unk20": ["int", 4, True],
    "unk24": ["int", 4, True],
    "unk28": ["float"],
    "unk2C": ["float"],
    "unk30": ["float"],
    "unk34": ["int", 4, True],
    "unk38": ["int", 4, True],
    "unk3C": ["int", 4, True],
    "unk40": ["int", 4, True],
    "unk44": ["int", 4, True],
    "unk48": ["int", 4, True],
    "unk4C": ["int", 4, True],
    "id": ["int", 4, True],
    "unk54": ["int", 4, True],
    "unk58": ["int", 4, True],
    "unk5C": ["int", 4, True],
    "unk60": ["int", 4, True],
    "unk64": ["hex"],
    "unk68": ["int", 4, True],
    "unk6C": ["int", 4, True],
    "unk70": ["int", 4, True],
    "unk74": ["int", 4, True],
    "unk78": ["int", 4, True],
    "unk7C": ["int", 4, True],
    "unk80": ["int", 4, True],
    "unk84": ["int", 4, True],
    "unk88": ["int", 4, True],
}
roomActor = {
    "id": ["int", 4, True],
    "x": ["float"],
    "y": ["float"],
    "z": ["float"],
    "unk10": ["float"],
    "unk14": ["float"],
    "unk18": ["float"],
    "unk1C": ["int", 4, True],
    "unk20": ["float"],
    "unk24": ["float"],
    "unk28": ["float"],
    "unk2C": ["int", 4, True],
    "unk30": ["float"],
    "unk34": ["float"],
    "unk38": ["float"],
    "unk3C": ["float"],
    "unk40": ["int", 4, True],
    "unk44": ["int", 4, True],
    "unk48": ["int", 4, True],
    "unk4C": ["int", 4, True],
    "unk50": ["int", 4, True],
    "unk54": ["int", 4, True],
    "unk58": ["int", 4, True],
    "unk5C": ["int", 4, True],
}

byteLimit = {
    "1": 128,
    "2": 32768,
    "4": 2147483648,
}
def hexToFloat(input):
    return struct.unpack('!f', bytes.fromhex(input))[0]
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
def floatToHex(input, header = False):
    result = hex(struct.unpack('<I', struct.pack('<f', input))[0]).replace("0x", "").upper()
    while len(result) < 4 * 2:
        result = "0" + result
    if header:
        result = "0x" + result
    return result
def numToHex(input, limit, header = False):
    base = hex(int(input))
    if base[0] == "-":
        #neg
        sub = ""
        while len(sub) < limit * 2:
            sub += "F"
        sub = hex(int(sub, 16) + 1)
        base = hex(int(sub, 16) + int(base, 16))
    end = base.replace("0x", "").upper()
    while len(end) < limit * 2:
        end = "0" + end
    if header:
        end = "0x" + end
    return end
def parseType(type, var):
    if type[0] == "int":
        #if newActor[var][1] < 4:
        #    aller = 0
        #   good = False
        #    while aller < 4:
        #        aller += newActor[var][1]
        #        pick = dats[k][aller] + dats[k][aller + 1]
        #        while len(pick) < newActor[var][1] * 2:
        #            pick += dats[k][aller + len(pick)] + dats[k][aller + 1 + len(pick)]
        #            newActor[var] = parseType(newActor[var], pick)
        return hexToNum(var, type[1], type[2])
    elif type[0] == "float":
        return hexToFloat(var)
    elif type[0] == "hex":
        return var
def parseBack(type, var):
    if type[0] == "int":
        return numToHex(var, type[1])
    elif type[0] == "float":
        return floatToHex(var)
    elif type[0] == "hex":
        return var
def toStrings(nerd):
    daters = nerd
    dataS = []
    i = 0
    while i < len(daters):
        b0 = hex(daters[i]).replace("0x", "").zfill(2)
        b1 = hex(daters[i + 1]).replace("0x", "").zfill(2)
        b2 = hex(daters[i + 2]).replace("0x", "").zfill(2)
        b3 = hex(daters[i + 3]).replace("0x", "").zfill(2)
        b17bomber = b0 + b1 + b2 + b3
        dataS.append(b17bomber.upper())
        i += 4
    return dataS
def parseStruct(dater, struct):
    i = 0
    new = deepcopy(struct)
    for key in list(struct.keys()):
        if struct[key][0] == "int":
            b = toStrings(dater[i:i+struct[key][1]])[0]
            new[key] = parseType(struct[key], b)
            i += struct[key][1] 
        else:
            b = toStrings(dater[i:i+4])[0]
            new[key] = parseType(struct[key], b)
            i += 0x4
    return new
def parseStruct2(dater, struct):
    i = 0
    while i < len(dater):
        if dater[i].find(",") != -1:
            break
        i += 1
    new = deepcopy(struct)
    for key in list(struct.keys()):
        s = dater[i].replace(",", "", 1)
        if struct[key][0] == "int":
            new[key] = int(s)
        elif struct[key][0] == "float":
            new[key] = float(s)
        elif struct[key][0] == "hex":
            new[key] = s
        i += 1
    return new
funny = '//wsl$/Ubuntu/root/RealCT/'
place = "model/"
level = "JungleLand"
yamler = 'chameleontwist.jp.yaml'
go = glob.glob(funny+"assets/" + place +level+'/**/*', recursive=True)
yamling = open(funny + yamler, encoding='UTF-8').readlines()
i = 0
way = 1
mode = 0
levelAdr = 0x0
while i < len(yamling):
    line = yamling[i]
    if line.find("name: " + level) != -1 and mode == 0:
        way = -1
        mode = 1
    elif line.find("start: ") != -1 and mode == 1:
        levelAdr = int(line.split(": ")[1],16)
        break
    i += way
i = 0
way = 1
mode = 0
globalAdr = 0x0
while i < len(yamling):
    line = yamling[i]
    if line.find("name: Global") != -1 and mode == 0:
        way = -1
        mode = 1
    elif line.find("start: ") != -1 and mode == 1:
        globalAdr = int(line.split(": ")[1],16)
        break
    i += way

pointerId = []
for name in go:
    if name.find("pointers.bin") != -1:
        dater = open(name, 'rb').read()
        p = []
        i = 0
        while i < len(dater):
            g = [toStrings(dater[i:i+4])[0], toStrings(dater[i+4:i+8])[0]]
            p.append(g)
            i += 0x30
        for each in p:
            s = 0
            while s < len(each):
                part = each[s]
                add = int(part[2:8], 16)
                if part[0:2] == "02":
                    add += globalAdr
                elif part[0:2] == "03":
                    add += levelAdr

                i = 0
                way = 1
                mode = 0
                fileName = ""
                while i < len(yamling):
                    line = yamling[i]
                    if s == 0:
                        if line.lower().find(hex(add)) != -1:
                            if line.find("name:") != -1:
                                fileName = line.split("name: ")[1]
                                fileName = fileName[:len(fileName) - 1].replace("{", "").replace("}", "")
                            else:
                                fileName = line.split(", ")[2]
                            break
                    elif s == 1:
                        getAdr = ""
                        if line.find("0x") != -1 and line.find("vram") == -1:
                            getAdr = int("0x" + line.split("0x", 1)[1].split(",", 1)[0], 16)
                            if getAdr > add and mode == 0:
                                mode = 1
                                way = -1
                            elif getAdr <= add and mode == 1:
                                if line.find("name:") != -1:
                                    fileName = line.split("name: ")[1]
                                    fileName = fileName[:len(fileName) - 1].replace("{", "").replace("}", "")
                                else:
                                    fileName = line.split(", ")[2]
                                break
                    i += way
                each[s] = [hex(add), fileName]
                if s == 0:
                    each[s][1] += ".gfx.inc.c"
                elif s == 1:
                    each[s][1] += ".bin"
                s += 1
        pointerId = p
        break
rO = []
sA = []
spA = []
rA = []
for name in go:
    #print(name)
    if name.find("roomObjects\\") != -1:
        dater = open(name, 'rb').read()
        num = len(list(roomObject.keys()))
        if num != len(dater) / 4:
            print('oops!')
        else:
            rO.append(parseStruct(dater, roomObject))
    elif name.find("spriteActor\\") != -1:
        dater = open(name, 'r', encoding='UTF-8').readlines()
        num = len(list(spriteActor.keys()))
        sA.append(parseStruct2(dater, spriteActor))
    elif name.find("specActors\\") != -1:
        dater = open(name, 'rb').read()
        num = len(list(specialActor.keys()))
        if num != len(dater) / 4:
            print('oops!')
        else:
            spA.append(parseStruct(dater, specialActor))
    elif name.find("roomActors\\") != -1:
        dater = open(name, 'rb').read()
        num = len(list(roomActor.keys()))
        if num != len(dater) / 4:
            print('oops!')
        else:
            rA.append(parseStruct(dater, roomActor))
for each in rO:
    modelViewerNew.start(pointerId[each["id"]][0][1])