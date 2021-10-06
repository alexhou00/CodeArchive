from sys import stdin

goal = stdin.readline().strip('\n')
string = stdin.readline()
[print(i) for i in string.split(goal)]

