from datetime import date
from sys import stdin

while True:
    try:
        a,b,c = map(int, stdin.readline().split())
        d = date(a,b,c)
        a,b,c = map(int, stdin.readline().split())
        e = date(a,b,c)
        print(abs((d-e).days))
    except:
        break
        

