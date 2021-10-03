### TLE ###
# python too slow... #
# will work in theory though #
'''
from sys import stdin, stdout

n, m = map(int, stdin.readline().split())
data = list(map(int, stdin.readline().split()))
for i in range(m):
    l, r = map(int, stdin.readline().split())
    stdout.write(str(sum(data[l-1:r]))+'\n')'''

from sys import stdin
from itertools import accumulate

for line in stdin:
    n, m = map(int, line.split())
    lsr = [int(k) for k in stdin.readline().split()]
    lsr = [0]+list(accumulate(arr))
    for i in range(m):
        l, r = map(int, stdin.readline().split())
        print(lsr[r]-lsr[l-1])
