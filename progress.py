import os
import random
import math
import json
from xml.etree.ElementTree import tostring

repo = "Rainchus/chameleonTwistv1.0-JP/"
#repo = "chameleonTwistRet/chameleonTwistv1.0-JP/"

nonDir = "/asm/nonmatchings"
srcDir = "/src"

dirr = os.getcwd() + "/decompAsset/percentBadges/"
for f in os.listdir(dirr):
    os.remove(dirr + f)


sList = []
non = os.scandir(os.getcwd() + nonDir)

def balls(yeah, ending, listToAppend):
    sublist = os.scandir(yeah.path)
    for thing in sublist:
            if thing.name.endswith(ending):
                listToAppend.append(thing.path)
            elif thing.name.endswith(".h"):
                continue
            else:
                balls(thing, ending, listToAppend)
    return



for entry in non:
    balls(entry, ".s", sList)


sList2 = []
for actualFile in sList:
    shortp = actualFile.split("\\")
    short = shortp.pop(len(shortp) - 1)
    texticles = ""
    for each in shortp:
        each += "\\"
        texticles += each
    sList2.append(texticles)


LIST = []
src = os.scandir(os.getcwd() + srcDir)
for entry in src:
    balls(entry, ".c", LIST)

percents = []

for file in LIST:
    getnon = file.replace(".c", "")
    getnon = getnon.replace("/src", nonDir)
    sEs = sList2.count(getnon + "\\")
    amount = 0
    for line in open(file, 'r'):
        if line.startswith("//AOF="):
            amount = int(line.replace("//AOF=", ""))
            shortp = getnon.split("\\")
            short = shortp[len(shortp) - 1]
            percents.append([file, getnon, short, sEs, amount])
            break

i = 0
for group in percents:
    total = group[4]
    nons = group[3]
    shortName = group[2]
    directoryNon = group[1]
    directorySrc = group[0]

  
    percentqu = (nons / total) * 100
    percentNotDone = 100.0 - percentqu
    percents[i] = [directorySrc, directoryNon, shortName, nons, total, percentqu, percentNotDone]
    i += 1

    print(percentNotDone)
    print(shortName)


def myFunc(each):
    numbesssss = each[6]
    return numbesssss



#sort by percent
percents.sort(key=myFunc)
percents.reverse()

total = 0.0
totalDone = 0.0
for each in percents:
    total += 100.0
    totalDone += each[6]


totalG = 0.0
totalDoneG = 0.0
for each in percents:
    nameVar = 0
    nameVar += int(each[2] == "2C3B0")
    nameVar += int(each[2] == "5FEB0")
    nameVar += int(each[2] == "5FF30")
    nameVar += int(each[2] == "29DF0")
    nameVar += int(each[2] == "30FB0")
    nameVar += int(each[2] == "84E0")
    nameVar += int(each[2] == "298D0")
    nameVar += int(each[2] == "1000")
    nameVar += int(each[2] == "1050")
    nameVar += int(each[2] == "A3D00")
    nameVar += int(each[2] == "A4300")
    nameVar += int(each[2] == "B39A0")
    nameVar += int(each[2] == "B2860")
    if nameVar > 0:
        totalG += 100.0
        totalDoneG += each[6]



#dump the base readme
lines = []
for line in open(os.getcwd() + "/decompAsset/baseREADME.md", 'r'):
    lines.append(line)

def makeAndAddBadge(label, message, color = None):
    jss = {
        "schemaVersion": 0,
        "label": "fuck",
        "message": "",
        "color": "#000000"
    }
    style = "plastic"
    if color != None:
        jss["color"] = color
    else:
        r = hex(int(math.ceil(random.random() * 256) - 1)).strip("0x")
        g = hex(int(math.ceil(random.random() * 256) - 1)).strip("0x")
        b = hex(int(math.ceil(random.random() * 256) - 1)).strip("0x")
    jss["color"] = "#" + r + g + b
    jss["schemaVersion"] = 1
    jss["label"] = label



    jss["message"] = message
    jsonPath = "/decompAsset/percentBadges/"
    json_string = json.dumps(jss)
    newPath = os.getcwd() + jsonPath + label.replace(" ", "") + ".json"
    with open(newPath, "w") as outfile:
        outfile.write(json_string)
    prefix = '<img src ="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/' + repo + 'master' + jsonPath
    suffix = ".json&style=" + style + '"/>'
    part = label.replace(" ", "")
    writeToReadMe = prefix + part + suffix
    return writeToReadMe
    


outOf = (totalDone / total) * 100
outOfG = (totalDoneG / totalG) * 100


lines.append("### Progresses\n")
lines.append("## Totals\n")
lines.append(makeAndAddBadge("Total - All", str(outOf) + "%"))
lines.append(" " + makeAndAddBadge("Total - Game", str(outOfG) + "%") + "\n")
lines.append("\n## Individual Files\n\n")

#json
for jsonx in percents:
    li = makeAndAddBadge(jsonx[2], str(jsonx[6]) + "%")
    lines.append(li)




#rewrite readme
with open(os.getcwd() + "/README.md", "w") as outfile:
    for each in lines:
        outfile.write(each)