import json

file_json = open("data1.json")

data = json.loads(file_json.read())

print("--------------------\n")

for i in range(len(data)):
    print(f"Nama        : {data[i]['nama']}")
    print(f"NPM         : {data[i]['NPM']}")
    print(f"Kelas       : {data[i]['kelas']}")
    print(f"Fakultas    : {data[i]['Fakultas']}")
    print(f"Jurusan     : {data[i]['Jurusan']}")
    print()
    