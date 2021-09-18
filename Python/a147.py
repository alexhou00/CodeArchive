from sys import stdin

for i in stdin:
    if i.strip() == '0':
        break
    else:
        for x in range(1, int(i)):
            print(str(x)+' ' if x%7 != 0 else '', end='')
    print()
