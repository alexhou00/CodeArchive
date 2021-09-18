from sys import stdin

for i in stdin:
    n, m = map(int, i.split())
    print(m+1 if n>m else m)
