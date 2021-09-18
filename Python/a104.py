from sys import stdin

for i in stdin:
    lst = stdin.readline().strip().split()
    lst.sort(key=int)
    print(' '.join(lst))
