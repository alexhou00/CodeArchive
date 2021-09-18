from sys import stdin

for i in stdin:
    a = int(i.strip())
    print((a*a*a+5*a+6)//6)
