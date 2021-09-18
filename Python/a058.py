import sys

times = sys.stdin.readline()
lst = []
for x in range(int(times)):
    lst.append(int(sys.stdin.readline()))

fin = [i%3 for i in lst]

print(fin.count(0), fin.count(1), fin.count(2))
