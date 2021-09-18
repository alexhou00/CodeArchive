import sys

line = int(sys.stdin.readline())

seq = [i.split() for i in sys.stdin]
seq2 = [[int(x) for x in lst] for lst in seq]


for lst in seq2:
    if lst[1]-lst[0]==lst[2]-lst[1]==lst[3]-lst[2]:
        print(*lst, lst[3]+lst[1]-lst[0])
    else:
        print(*lst, int(lst[3]*lst[1]/lst[0]))
