from sys import stdin

lines = int(stdin.readline())

for i in range(lines):
    result = 1
    lst = [int(char) for char in stdin.readline().strip()]
    for j in lst:
        result *= j
    print(result)
