import sys

def romanToInt(roman):
    ints = ( 1,  5, 10, 50,100,500,1000)
    roms = ("I","V","X","L","C","D","M")
    sum_ = 0
    for idx in range(len(roman)-1):
        if roms.index(roman[idx+1]) > roms.index(roman[idx]):
            sum_ -= ints[roms.index(roman[idx])]
        else: sum_ += ints[roms.index(roman[idx])]
    sum_+=ints[roms.index(roman[-1])]
    return sum_

def intToRoman(num):
    ints = ( 1,   4,  5,   9, 10,  40, 50,  90,100, 400,500, 900,1000)[::-1]
    roms = ("I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M")[::-1]
    if num == 0:
        return "ZERO"
    else:
        i=0
        roman=""
        while num > 0:
            while num >= ints[i]:
                num -= ints[i]
                roman += roms[i]
            i+=1
        return roman

lst = []
for line in sys.stdin:
    if line.strip()=="#":
        break
    else:
        lst.append(line.split())

for num1, num2 in lst:
    ans = abs(romanToInt(num1) - romanToInt(num2))
    print(intToRoman(ans))

