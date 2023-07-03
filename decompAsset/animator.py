from math import *
import bpy
import glob

silly = '//wsl$/Ubuntu/root/RealCT/'
assetDir = 'assets/'
toUse = 'anim/actors/spiderRock/'

files = glob.glob(silly + assetDir + toUse + "*.anim.inc.c", recursive = True)

def wrapf(val):
    #this is a shot in the dark and i dont know if this is right
    #BUT there has to be some parsing for non correct values cuz that -1.1 is actually in game and used
    #if it is wrong please correct this
    #im literally just assuming that it sets the int or whatever back to 0
    if val < -1:
        val += 1
    elif val > 1:
        val -= 1
    return val

def trim(st):
    return st.replace("{", "").replace("}", "").replace("]", "").replace("[", "").strip()

def start(file):
    contents = open(file).readlines()
    for i in range(0, 10):
        contents.pop(0)
    framesAO = int(trim(contents.pop(0)).replace(",", ""))
    objectsAO = int(trim(contents.pop(0)).replace(",", ""))
    mtx = []
    for i in contents:
        s = trim(i).split(",")
        for x in s:
            n = x.strip()
            if n != "":
                mtx.append(float(n))
    seperate = []
    i = 0
    while i < len(mtx):
        seperate.append(mtx[0:16])
        i += 16
    atObject = 0
    atFrame = 0
    for mtx in seperate:
        scale = [mtx[0], mtx[4 + 1], mtx[8 + 2]]
        translation = [mtx[12], mtx[12 + 1], mtx[12 + 2]]

        rotation = [
            [acos(wrapf(mtx[4 + 1])), asin(wrapf(mtx[4 + 2])), asin(-wrapf(mtx[8 + 1])), acos(wrapf(mtx[8 + 2]))], #cos0x, sin0x, -sin0x, cos0x
            [acos(wrapf(mtx[0]))    , asin(-wrapf(mtx[2]))   , asin(wrapf(mtx[8]))     , acos(wrapf(mtx[8 + 2]))], #cos0y, -sin0y, sin0y, cos0y
            [acos(wrapf(mtx[0]))    , asin(wrapf(mtx[1]))    , asin(-wrapf(mtx[4]))    , acos(wrapf(mtx[4 + 1]))] #cos0z, sin0z, -sin0z, cos0z
        ]
        i = 0
        while i < len(rotation):
            j = 0
            while j < len(rotation[i]):
                rotation[i][j] = round(degrees(rotation[i][j]), 12)
                j += 1
            i += 1

        i = 0
        while i < len(rotation):
            if rotation[i][0] != rotation[i][3] or rotation[i][1] != rotation[i][2]:
                print("angle results do not match! check code or make rounding more lenient!")
                exit(2)
            j = 0
            new = 0.0
            while j < len(rotation[i]):
                if rotation[i][j] != 0.0:
                    new = rotation[i][j]
                j += 1
            rotation[i] = new
            i += 1

        obj = bpy.data.objects[atObject]
        #print("Scale: " + str(scale))
        obj.scale = (scale[0], scale[1], scale[2])
        #print("Translation: " + str(translation))
        obj.location = (translation[0], translation[1], translation[2])
        #print("Rotation: " + str(rotation))
        obj.rotation_euler = (radians(rotation[0]), radians(rotation[1]), radians(rotation[2]))
        
        obj.keyframe_insert(data_path="location", frame=atFrame + 1)
        obj.keyframe_insert(data_path="rotation_euler", frame=atFrame + 1)
        obj.keyframe_insert(data_path="scale", frame=atFrame + 1)
        atObject += 1
        if atObject >= objectsAO:
            atObject = 0
            atFrame += 1
        

for file in files:
    start(file)