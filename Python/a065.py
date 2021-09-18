from sys import stdin

lst = [i.strip() for i in stdin]

for word in lst:
    for j in range(len(word)-1):
        print(abs(ord(word[j])-ord(word[j+1])), end='')
    print()
