from sys import stdin

lines = int(stdin.readline())
sq = [i*i for i in range(35)]

for i in range(lines):
    a = int(stdin.readline())
    b = int(stdin.readline())
    r = sum([x for x in sq if x>=a and x<=b])
    print("Case %d: %d" % (i+1, r))
