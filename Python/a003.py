import sys

data = sys.stdin.readline()
m, d = data.split()
m, d = int(m), int(d)
s=(m*2+d)%3

if s==0:
    print("普通")
elif s==1:
    print("吉")
else:
    print("大吉")
