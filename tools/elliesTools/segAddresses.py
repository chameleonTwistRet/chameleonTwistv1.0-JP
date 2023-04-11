yaml = "./chameleontwist.jp.yaml"

with open(yaml, "r") as f:
    lines = f.readlines()
    for i in range(len(lines)-1):
        if "[0x" in lines[i] or "{" in lines[i] and "#" not in lines[i]:
            ad = int(lines[i].split("0x")[1].split(",")[0].strip(), 16)
            ad = hex(ad)
            # Jungle Land
            if ad >= hex(int("6A8e20", 16)) and ad <= hex(int("70db70", 16)):
                seg = int("03000000", 16) + (int(ad, 16) - int("6A8e20", 16))

                if "type: " in lines[i]:
                    _type = lines[i].split("type:")[1].split(",")[0].strip().replace("]", "")
                else:
                    _type = lines[i].split(",")[1].strip().replace("]", "")

                if "name: " in lines[i]:
                    print(lines[i].split("name:")[1].split("}")[0].strip().replace("]", ""), f"[{_type}]",  hex(seg))
                elif "bin" not in lines[i]:
                    print(lines[i].split(",")[2].strip().replace("]", ""), f"[{_type}]", hex(seg))