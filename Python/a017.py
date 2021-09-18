from sys import stdin

for line in stdin:
    line = line.replace('/','//')
    print(eval(line))
