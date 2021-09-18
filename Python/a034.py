from sys import stdin

for i in stdin:
    print(bin(int(i))[2:])
