from sys import stdin

for line in stdin:
    lst = list(map(int, line.split()))[1:]
    if sum(lst)>59*len(lst):
        print("no")
    else:
        print("yes")
