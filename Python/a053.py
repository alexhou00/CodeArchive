'''
答對題數在 0~10 者，每題給6分。
題數在 11~20 者，從第11題開始，每題給2分。(前10題還是每題給6分)
題數在 21~40 者，從第21題開始，每題給1分。
題數在 40 以上者，一律100分。
'''
from sys import stdin

lst = [int(i) for i in stdin]

for num in lst:
    if num >= 40:
        print(100)
    elif num >= 21:
        print(80+num-20)
    elif num >= 11:
        print(60+2*(num-10))
    else:
        print(num*6)
