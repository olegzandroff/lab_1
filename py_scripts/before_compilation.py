import os

path = "../lab_1"
prototypes = []

with open(f"{path}/prototypes.h", "r") as f:
    prototypes = f.readlines()
    with open(f"{path}/prototypes_backup", "w") as backup:
        backup.writelines(prototypes)

i = 0
includes = []
while i < len(prototypes):
    line = prototypes[i]
    if line.find("#include") >= 0 and line.find("libraries.h") == -1:
        split_line = line.split('\"')
        prototypes.remove(line)
        includes.append(split_line[1])
        with open(f"{path}/{split_line[1]}", "r") as header:
            k = i
            for header_line in header.readlines():
                prototypes.insert(k, header_line)
                k += 1
    i += 1

with open(f"{path}/prototypes.h", "w") as f:
    f.writelines(prototypes)

for i in includes:
    os.rename(f"{path}/{i}", f"{path}/papka/{i}")
