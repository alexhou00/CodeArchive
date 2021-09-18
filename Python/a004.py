from sys import stdin

def isLeap(year):
    year = int(year)
    if year%400==0:
        return "閏年"
    elif year%100==0:
        return "平年"
    elif year%4==0:
        return "閏年"
    else:
        return "平年"

lst = [x for x in stdin]

print(*map(isLeap, lst), sep='\n')
