#python file for hardcoding levelGroup c's (could also probably work in general)
#run from root
c_name = "Global"
path = f"src/levelGroup/{c_name}.c"
lines = open(path, "r", encoding="utf-8").readlines()
i = 0
platformId = 1
while i < len(lines):
    line = lines[i]
    if line.startswith("//"):
        i += 1
        continue
    #all of these are represented directly in game; subject to copyright
    #though the collision is arguable
    blacklist = ["gfx", "vtx", "png", "pal", "light", "colV", "colT", "colS", "animH", "animArr", "animP"]
    #temp, needs reformatting
    blacklist += ["ut1"]
    valid = True
    for each in blacklist:
        if line.find(f".{each}.") != -1:
            valid = False
            break
    if line.find(".roomObj.") != -1 or line.find(".roomAct.") != -1 or line.find(".sprite.") != -1 or line.find(".clct.") != -1 or line.find(".rmSet.") != -1:
        roomName = ""
        if line.find("rmSet") == -1:
            roomName = line.split("/")[-1].split("_")[0]
        suffix = ""
        type = ""
        if line.find(".roomObj.") != -1:
            suffix = "objects"
            type = "RoomObject"
        elif line.find(".roomAct.") != -1:
            suffix = "actors"
            type = "RoomActor"
        elif line.find(".sprite.") != -1:
            suffix = "sprites"
            type = "SpriteActor"
        elif line.find(".clct.") != -1:
            suffix = "collectables"
            type = "Collectable"
        elif line.find(".rmSet.") != -1:
            suffix = "instances"
            roomName = "room"
            type = "RoomInstance"
        files = []
        fileData = []
        header = f"{type} {c_name}_{roomName}_{suffix}[NUM] = {{\n"
        if header.find("eroom") != -1:
            header = header.replace("eroom","ext_room")
        while lines[i].find(roomName) != -1 and lines[i].find("extRooms") == -1:
            files.append(lines.pop(i))
        if type == "RoomInstance" and files == []:
            header = header.replace(roomName, "ext_room")
            while lines[i].find(".rmSet.") != -1:
                files.append(lines.pop(i))
        for fileLine in files:
            file = fileLine.replace('#include "', "").strip()[:-1]
            importedData = open(file, "r", encoding="utf-8").readlines()
            while importedData[0].find(" = ") == -1:
                importedData.pop(0)
            x = 0
            while x < len(importedData):
                importedData[x] = importedData[x].strip()
                x += 1
            start = importedData.pop(0)
            end = importedData.pop(-1)
            result = ("{"+" ".join(importedData)+"},\n").replace(",}", "}")
            
            fileData.append(result)
        if type == "RoomInstance":
            x = 0
            while x < len(fileData):
                theLine = fileData[x]
                args = theLine.split(",")
                pointers = [args.pop(0), args.pop(0), args.pop(0), args.pop(0)]
                z = 0
                while z < len(pointers):
                    pointers[z] = pointers[z].replace("{", "")
                    pointers[z] = pointers[z].replace("&", "")
                    if pointers[z].find(c_name) != -1:
                        real = pointers[z].split("_")[0].strip()
                        room = pointers[z].split("_")[1].strip()
                        suffix = ""
                        if pointers[z].find("Roomobj") != -1:
                            suffix = "objects"
                        elif pointers[z].find("Roomact") != -1:
                            suffix = "actors"
                        elif pointers[z].find("Sprite") != -1:
                            suffix = "sprites"
                        elif pointers[z].find("Clct") != -1:
                            suffix = "collectables"
                        pointers[z] = f"{real}_{room}_{suffix}"
                    if z == 0: pointers[z] = "{"+pointers[z]
                    z += 1
                pointers += args
                fileData[x] = ",".join(pointers)
                x += 1

        fileData[-1] = fileData[-1].replace("},\n", "}\n")


        header = header.replace("NUM", str(len(files)))
        insertLines = [header]
        insertLines += fileData
        insertLines.append("};\n")
        
        oi = 0
        while len(insertLines) > 0: #add data
            lines.insert(i, insertLines.pop(-1))
            oi += 1
        i += oi
    elif line.find("#include") != -1 and line.find(".h") == -1 and valid:
        file = line.replace('#include "', "").strip()[:-1]
        importedData = open(file, "r", encoding="utf-8").readlines()
        #import remove
        while importedData[0].find(" = ") == -1:
            importedData.pop(0)
        lines.pop(i) #remove original include
        #reformat bin
        if importedData[0].find("unsigned char ") != -1:
            start = importedData[0].split("{")[0]+"{"
            middle = importedData[0].replace(start, "").replace(", };", "").strip()+"\n"
            end = "};\n"
            start += "\n"
            importedData = [start, middle, end]
        #reformat stagemapdata
        elif importedData[0].find("StageMapData") != -1:
            info = importedData[1].split(",")
            info[2] = f" {c_name}_room_instances"
            importedData[1] = ",".join(info)
        #reformat level header
        elif importedData[0].find("StageData") != -1:
            info = importedData[2]
            if info.find("0,") == -1:
                importedData[2] = f"    {c_name}_ext_room_instances,\n"

        oi = 0
        while len(importedData) > 0: #add data
            lines.insert(i, importedData.pop(-1))
            oi += 1
        i += oi

    i += 1

open(path.replace(c_name, c_name+"2"), "w", encoding="utf-8").writelines(lines)