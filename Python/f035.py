from sys import stdin

for line in stdin:
    print(*[ord(x) for x in line.strip()], sep='_')
