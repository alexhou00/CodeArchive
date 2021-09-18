from sys import stdin

form = {"A":10, "B":11, "C":12, "D":13, "E":14, "F":15, "G":16, "H":17, "I":34,
        "J":18, "K":19, "L":20, "M":21, "N":22, "O":35, "P":23, "Q":24, "R":25,
        "S":26, "T":27, "U":28, "V":29, "W":32, "X":30, "Y":31, "Z":33}

ID = stdin.readline()

nums = form[ID[0]]
result = nums//10+9*nums%10
num = [int(i) for i in ID.strip()[1:]]
result += num[0]*8+num[1]*7+num[2]*6+num[3]*5+num[4]*4+num[5]*3+num[6]*2+num[7]*1+num[8]
print("real" if result%10==0 else "fake")
