import bpy
from math import radians
from math import abs
keys = open("C:/Users/natha/Downloads/blenderOuput.txt", "r", encoding="utf-8").read()

objects = 0xD
frames = 0x10

atFrame = 0
atObject = 0

#object integer scaling
#if you cast some of these ints to float the models would be HUGE
scale = 100.0

keyFrames = keys.split("}],")

for frame in keyFrames:
    for object in frame.split("]},"):
        attribute = object.split("],")
        i = 0
        while i < len(attribute):
            attribute[i] = attribute[i].split("[")[-1].split(",")
            x = 0
            while x < len(attribute[i]):
                attribute[i][x] = float(attribute[i][x].replace("]", "").replace("}", ""))
                x += 1
            i += 1
            
        
        
        if attribute[0][0] == 180: attribute[0][0] = 0
        if abs(attribute[0][2]) == 180: attribute[0][2] = 0
        
        if attribute[0][1] != 0:
            flipperFlop = 90 - attribute[0][1]
            if str(attribute[0][1])[0] == "-":
                flipperFlop = (90 - (attribute[0][1] * -1)) * -1
            attribute[0][1] = flipperFlop
        
        #if attribute[2][0] == 1:
        attribute[2][0] = -1
        #if attribute[2][2] == 1:
        attribute[2][2] = -1
        attribute[2][1] = 1
        
        
        
        blenderRotation = (radians(attribute[0][0]), radians(attribute[0][2]), radians(attribute[0][1]))
        
        
        blenderTranslation = (attribute[1][0]/scale, attribute[1][2]/scale, attribute[1][1]/scale)
        blenderScale = (-attribute[2][0], -attribute[2][2], attribute[2][1])
        
        
        obj = bpy.data.collections[0].objects[atObject]
        
        obj.rotation_euler = blenderRotation
        obj.location = blenderTranslation
        obj.scale = blenderScale

        obj.keyframe_insert(data_path="rotation_euler", frame=atFrame+1)
        obj.keyframe_insert(data_path="location", frame=atFrame+1)
        obj.keyframe_insert(data_path="scale", frame=atFrame+1)
        
        
        
        atObject += 1
    atFrame += 1
    atObject = 0