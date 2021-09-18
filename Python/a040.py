###Time Limit Exceed###
###Use C++ Instead###

from sys import stdin

n, m = map(int, stdin.readline().split())
isRecorded = False
powers = ((1, 0, 0, 0, 0, 0, 0),
          (1, 1, 1, 1, 1, 1, 1),
          (1, 2, 4, 8, 16, 32, 64),
          (1, 3, 9, 27, 81, 243, 729), 
          (1, 4, 16, 64, 256, 1024, 4096), 
          (1, 5, 25, 125, 625, 3125, 15625), 
          (1, 6, 36, 216, 1296, 7776, 46656), 
          (1, 7, 49, 343, 2401, 16807, 117649), 
          (1, 8, 64, 512, 4096, 32768, 262144), 
          (1, 9, 81, 729, 6561, 59049, 531441))

for i in range(n, m+1):
    sum_ = 0
    for char in str(i):
        sum_ += powers[int(char)][len(str(i))]
    if i == sum_:
        print(i, end=' ')
        isRecorded = True
        
if isRecorded == False:
    print('none', end='') 
print()
