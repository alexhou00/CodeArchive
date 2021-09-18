import sys

n = int(sys.stdin.readline())
count = 0

for i in range(2, n):
    if n%i == 0:
        count += 1
        power = 0
        while n%i == 0:
            power += 1
            n = int(n/i)
        if power > 1:
            print("%d^%d" % (i, power), end='')
        else:
            print(i, end='')
        if n!=1:
            print(" * ", end='')
        else: break
if count == 0:
    print(n, end='')
