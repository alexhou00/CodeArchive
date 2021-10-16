from sys import stdin, stdout

a, b = map(int, stdin.readline().split())
lst = [list(map(int, stdin.readline().split())) for i in range(a)]
lst.sort()
for k in range(a):
    stdout.write(' '.join(map(str, lst[k]))+'\n')
