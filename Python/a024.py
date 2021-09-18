from sys import stdin
import math

x, y = map(int, stdin.readline().split())
print(math.gcd(x,y))


'''for i in range(1, min(x,y)+1):
    if((x % i == 0) and (y % i == 0)):
        gcd = i
        
print(gcd)'''
