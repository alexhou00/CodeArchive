#from sys import stdin

keys = (1, 10, 9, 8, 7, 6, 5, 4, 9, 3, 2, 2, 11, 10, 8, 9, 8, 7, 6, 5, 4, 3, 11, 3, 12, 10)

numbers = list(map(int, input()))
result = numbers[0]*8+numbers[1]*7+numbers[2]*6+numbers[3]*5+numbers[4]*4+numbers[5]*3+numbers[6]*2+numbers[7]*1+numbers[8]

for i in range(len(keys)):
    if (result+keys[i])%10 == 0:
        print(chr(65+i), end='')
