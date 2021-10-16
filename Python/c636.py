from sys import stdin, stdout

animals = "鼠牛虎兔龍蛇馬羊猴雞狗豬"
for n in stdin:
    n=int(n)
    if (n>0):stdout.write(animals[(12+(n%12))%12-1]+'\n')
    else: stdout.write(animals[(12+(n%12))%12]+'\n')

