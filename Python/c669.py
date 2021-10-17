from sys import stdin, stdout

t = int(stdin.readline())

for i in range(t):
    lst = list(map(int, stdin.readline().split()))
    for x in lst:
        if lst.count(x) > 1:
            d = x
            break
    mySet = set(lst)
    m = int((min(mySet)+max(mySet))*(len(mySet)+1)/2-sum(mySet))
    stdout.write(str(m)+' '+str(d)+'\n')
