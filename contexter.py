import os

includePath = "include"
commonName = "types.h"
structName = "common_structs.h"
funcName = "functions.jp.h"
varName = "variables.jp.h"
outfile = "context.txt"

dir_path = os.path.dirname(os.path.realpath(__file__)) + "/"
print(dir_path)
f = open(dir_path + includePath + "/" + commonName, "r")
s = f.readlines()
f = open(dir_path + includePath + "/" + structName, "r")
s += f.readlines()
f = open(dir_path + includePath + "/" + funcName, "r")
s += f.readlines()
f = open(dir_path + includePath + "/" + varName, "r")
s += f.readlines()
new = []
for each in s:
    if not each.startswith("#") and each != "" and each != "\n" and each.find("OS") == -1:
        new.append(each)

f = open(outfile, "a")
f.writelines(new)
f.close()