import argparse

def start(group, where):
    yaml = open("chameleontwist.jp.yaml", "r", encoding='UTF-8').readlines()

    symbolsPath = "symbol_addrs.txt"
    if group == "CLEAR":
        symbolAddrs = open(symbolsPath, "r").readlines()
        dump = []
        for line in symbolAddrs:
            dump.append(line)
            if line == "//ASSETS\n": break
        open(symbolsPath, "w").writelines(dump)
        return
    
    writeTo = "src/assets/"+where+".c"
    open(writeTo, "w").close() #clear
    reading = False
    tabbing = ""

    buildFolder = ["bin", "palette", "ci4", "ci8", "i4", "ia4", "i8", "ia8", "rgba16", "rgba32"]
    incExt = {#specifically for ones who dont exactly match their file inc names
        "animHeader": "animH",
        "animArray": "animArr",
        "spriteActor": "sprite",
        "collectable": "clct",
        "roomObject": "roomObj",
        "roomActor": "roomAct",
        "roomSettings": "rmSet",
        "unkType1": "ut1",
        "unkType2": "ut2",
        "levelScope": "lvlScope",
        "levelHeader": "lvlHdr",
        "lights": "light",
        "palette": "pal",
        "ci4": "png",
        "ci8": "png",
        "i4": "png",
        "ia4": "png",
        "i8": "png",
        "ia8": "png",
        "rgba16": "png",
        "rgba32": "png",
        "gfxSeg": "gfx",
    }

    newC = ["//Generated with Nathan's Epic C creator!!!!111\n",
            #'#include "common.h"\n'
            ]
    vram = 0x0
    baseAdr = 0x0
    newSymbols = []


    i = 0
    while i < len(yaml):
        line = yaml[i]
        if line.find(" "+group+"\n") != -1 and line.find("name: ") != -1 and not reading:
            tabbing = line.split('name')[0]
            for back in range(5):
                get = yaml[i + back]
                if get.startswith("  - start: ") and baseAdr==0x0:
                    baseAdr = int(get.split(": ")[1].split("#")[0].strip(),16)
                elif get.startswith("    vram: ") and vram==0x0:
                    vram = int(get.split(": ")[1].split("#")[0].strip(),16)
                get = yaml[i - back]
                if get.startswith("  - start: ") and baseAdr==0x0:
                    baseAdr = int(get.split(": ")[1].split("#")[0].strip(),16)
                elif get.startswith("    vram: ") and vram==0x0:
                    vram = int(get.split(": ")[1].split("#")[0].strip(),16)
            reading = True
        if reading and line.find("-") != -1 and line.find(",") != -1:
            if not line.startswith(tabbing) or line.startswith("  - start: "):
                break
            values = {}
            if line.find("[") != -1: #normal
                args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
                for a in range(len(args)):
                    args[a] = args[a].strip()
                values = {
                "Address": args[0],
                "Type": args[1],
                }
                if len(args) < 3: #no name, usually for fuckall bins
                    values["Path"] = args[0].split("x")[1].upper()
                elif len(args) >= 3:
                    values["Path"] = args[2]
                if len(args) > 3:
                    values["Ext"] = args[3:]

            elif line.find("{") != -1: #dict
                args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
                for a in range(len(args)):
                    args[a] = args[a].replace("type: ", "").replace("name: ", "").strip()
                values = {
                "Address": args[0],
                "Type": args[1],
                "Path": args[2],
                }
                if len(args) > 3:
                    values["Ext"] = args[3:]
            values["ShortName"] = values["Path"].split("/")[-1].replace(".","_")
            if values["ShortName"][0].isdigit(): values["ShortName"]="d"+values["ShortName"] #bc we cant have a number start now can we
            useType = values["Type"]
            if values["Type"] in list(incExt.keys()): useType = incExt[values["Type"]]
            line = '#include "assets/'+values["Path"]+'.'+useType+'.inc.c"\n'
            if values["Type"] == "bin":line = line.replace(".bin", "",1)
            if values["Type"] in buildFolder:line = line.replace("assets/", "build/include/assets/",1)
            newC.append(line)
            ####
            #symbol creation
            ramadr = hex((int(values["Address"],16)-baseAdr)+vram).upper().replace("0X", "0x")
            namer = line.split("/")[-1].split(".inc.c")[0].replace(".", "_")
            if namer[0].isdigit(): namer="d"+namer
            newSymbols.append(namer+" = "+ramadr+";\n")

        i += 1
    open(writeTo, "w", encoding="UTF-8").writelines(newC)
    open(symbolsPath, "a").writelines(newSymbols)
    return 

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("group", help="group name", type=str,)
    parser.add_argument("outfileName", help="output file", type=str)
    args = parser.parse_args()
    start(args.group, args.outfileName)