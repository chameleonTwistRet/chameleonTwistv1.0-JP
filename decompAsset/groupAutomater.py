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
    
    symbolage = False

    writeTo = "src/"+where+".c"
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

    baseAdr = 0x0
    segmentId = -1
    newC = [
        '#include "common.h"\n',
    ]
    newSymbols = ["\n\n//generated section "+group+" starting here\n"]
    defDir = ""
    definitions = []
    
    pads = 0

    i = 0
    while i < len(yaml):
        line = yaml[i]
        if line.find("name: "+group+"\n") != -1 and not reading:
            tabbing = line.split('name')[0]
            for back in range(5):
                if baseAdr != 0x0 and segmentId != -1:
                    break
                get = yaml[i + back]
                if get.startswith("  - start: ") and baseAdr==0x0:
                    baseAdr = int(get.split(": ")[1].split("#")[0].strip(),16)
                if get.find("#SEGMENT ") != -1 and segmentId==-1:
                    segmentId = int(get.split("#SEGMENT ")[1].split("#")[0].strip(),16)
                get = yaml[i - back]
                if get.startswith("  - start: ") and baseAdr==0x0:
                    baseAdr = int(get.split(": ")[1].split("#")[0].strip(),16)
                if get.find("#SEGMENT ") != -1 and segmentId==-1:
                    segmentId = int(get.split("#SEGMENT ")[1].split("#")[0].strip(),16)
            segmentId = segmentId<<24
            reading = True
        if reading and (not line.startswith(tabbing) or line.startswith("  - start: ")) and line != "\n":
            break
        if reading and line.find("-") != -1 and (line.find(",") != -1 or line.find("#")!=-1):
            values = {}
            if line.find(",") != -1:
                if line.find("[") != -1: #normal
                    args = ((line.split("#")[0].strip().split("[")[-1]))[:-1].split(",")
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
                    if values["Address"] == "auto":
                        i += 1
                        continue

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
                values["Path"] = defDir+"/"+values["Path"].replace(".MEd", "")
                values["ShortName"] = values["Path"].split("/")[-1].replace(".","_")
                if values["ShortName"][0].isdigit(): values["ShortName"]="d"+values["ShortName"] #bc we cant have a number start now can we
                useType = values["Type"]
                if values["Type"] in list(incExt.keys()): useType = incExt[values["Type"]]
                nline = '\n#include "assets/'+values["Path"]+'.'+useType+'.inc.c"\n'
                if values["Type"] == "bin": nline = nline.replace(".bin", "",1)
                if values["Type"] in buildFolder: nline = nline.replace("assets/", "build/include/assets/",1)

                segmentAdr = (int(values["Address"], 16) - baseAdr) + segmentId
                # #symbol creation
                customType = ""
                if values["Type"] in ["mtx", "vtx", "gfx"]: customType = values["Type"].capitalize()
                elif values["Type"] in list(incExt.keys()): customType = incExt[values["Type"]].capitalize()
                elif values["Type"] in buildFolder and values["Type"] != "bin": customType = incExt[values["Type"]].upper()
                else: customType = values["Type"].capitalize()
                if symbolage:
                    symbol = group+"_"+values["ShortName"].split("_")[0]+"_"+customType
                else:
                    symbol = hex(segmentAdr).upper().replace("0X", "")
                    while len(symbol) < 8: symbol="0"+symbol
                    symbol = "D_"+symbol+"_"+group


                #typedef
                char = nline.find(".png") != -1 or nline.find(".pal") != -1 or values["Type"] == "bin"
                char = char and line.find(".MEd") != -1 

                if values["Type"] == "mtx": 
                    newC.append("Mtx_f "+symbol+" = {")
                elif values["Type"] == "lights":
                    newC.append("Lights1 "+symbol+" =")
                elif values["Type"] == "vtx":
                    newC.append("Vtx "+symbol+"[] = {")
                elif values["Type"] in ["gfx", "gfxSeg"]:
                    newC.append("Gfx "+symbol+"[] = {")
                elif values["Type"] in ["collision"]:
                    colType = values["Ext"][1].split(" ")[-1].replace('"', "").strip()
                    print(colType)
                    symbol = symbol.replace(customType, colType)
                    nline = nline.replace(useType, "col"+colType[0])
                    if colType in ["Verts", "Settings"]:
                        newC.append("Vec3f "+symbol+"[] = {")
                    elif colType == "Tris":
                        newC.append("Vec3s "+symbol+"[] = {")
                    elif colType == "Header":
                        newC.append("CollisionData "+symbol+"[] = {")
                elif char:
                    newC.append("unsigned char "+symbol+"[] = {")
                    
                    
                newC.append(nline)

                #end_typedef
                if values["Type"] in ["mtx", "vtx", "gfx", "gfxSeg", "collision"] or char: 
                    newC.append("};\n")
                
                #pretty sure this isnt needed but it helps line up with actual ram values :)
                padAdr = hex(segmentAdr).upper().replace("0X","0x")
                while len(padAdr) < 10: padAdr = padAdr.replace("0x", "0x0")
                ss = symbol+" = "+padAdr+";"
                #change the customType here to match gfx linking
                #GENERALLY they are the same as the suffix but stuff like images are Tluts so yeah
                #might have to go more in depth based on type of image (rgba16, i4, etc)
                #but until gfx whines at me we go with this :)

                if customType == "Png": customType = "TImg"
                elif customType == "Pal": customType = "TLut"
                ss += " // type:"+customType+" rom:"+values["Address"].upper().replace("0X","0x")
                if symbolage:
                    newSymbols.append(ss+"\n")


            elif line.find("#")!=-1:
                #assumed/known types
                if line.find("#B8000000"):#filepad
                    add = '#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny\n\n'
                    if not add in definitions: definitions.append(add)
                    pads += 1

                    newC.append("unsigned char "+group+"_Pad"+str(pads)+"[] = FILEPAD;\n")

        elif reading and line.find('dir: ') != -1:
            if defDir != "": defDir+="/"
            defDir += line.split("dir: ")[-1].strip()
        i += 1
    definitions.reverse()
    for i in definitions: newC.insert(1, i)
    open(writeTo, "w", encoding="UTF-8").writelines(newC)
    if symbolage: open(symbolsPath, "a").writelines(newSymbols)
    return 

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("group", help="group name", type=str,)
    parser.add_argument("outfileName", help="output file", type=str)
    args = parser.parse_args()
    start(args.group, args.outfileName)