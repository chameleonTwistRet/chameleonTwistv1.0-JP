import argparse

def start(group, where):
    yaml = open("chameleontwist.jp.yaml", "r", encoding='UTF-8').readlines()
    writeTo = "src/assets/"+where+".c"
    levels = 2 + len(where.split("/"))
    dots = []
    for i in range(levels):
        dots.append("..")
    leveler="/".join(dots)
    open(writeTo, "w").close() #clear
    reading = False
    tabbing = ""

    notInced = ["bin", "palette", "ci4", "ci8", "i4", "ia4", "rgba16"]
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
    }

    newC = ["//Generated with Nathan's Epic C creator!!!!111\n",
            #'#include "common.h"\n'
            ]

    for line in yaml:
        if line.find(group) != -1 and line.find("name: ") != -1 and not reading:
            tabbing = line.split('name')[0]
            reading = True
        if reading and line.find("-") != -1 and line.find(",") != -1:
            if not line.startswith(tabbing):
                break
            values = {}
            if line.find("[") != -1: #normal
                args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
                for i in range(len(args)):
                    args[i] = args[i].strip()
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
                for i in range(len(args)):
                    args[i] = args[i].replace("type: ", "").replace("name: ", "").strip()
                values = {
                "Address": args[0],
                "Type": args[1],
                "Path": args[2],
                }
                if len(args) > 3:
                    values["Ext"] = args[3:]
            values["ShortName"] = values["Path"].split("/")[-1].replace(".","_")
            if values["ShortName"][0].isdigit(): values["ShortName"]="d"+values["ShortName"] #bc we cant have a number start now can we
            if values["Type"] in notInced:
                #custom parsing for all that silly shit
                #put all of the 'pure data' (aka non struct) files here to gen include lines
                #if values["Type"] == "bin":
                #    newC.append("\n".join([
                #    'ALIGNED8 static const u8 '+values["ShortName"]+'[] = {',
                #    ' #include "'+""+'assets/'+values["Path"]+'.bin"',
                #    '};',
                #    ''])
                #    )
                pass
            else:
                useType = values["Type"]
                if values["Type"] in list(incExt.keys()): useType = incExt[values["Type"]]
                newC.append('#include "'+""+'assets/'+values["Path"]+'.'+useType+'.inc.c"\n')
    open(writeTo, "w", encoding="UTF-8").writelines(newC)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("group", help="group name", type=str,)
    parser.add_argument("outfileName", help="output file", type=str)
    args = parser.parse_args()
    start(args.group, args.outfileName)