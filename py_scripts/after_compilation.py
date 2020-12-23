path = "../lab_1"

with open(f"{path}/prototypes_backup", "r") as backup:
    with open(f"{path}/prototypes.h", "w") as prototypes:
        prototypes.writelines(backup.readlines())
