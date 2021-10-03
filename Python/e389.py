from math import pi, e, log, log10, sin, cos, tan, factorial, sqrt
from re import sub
from sys import stdin, stdout

while True:  
    try:
        line = stdin.readline()
        if len(line) == 0: break
        line = sub(r'([\w]+)!|\((.+?)\)!', r'factorial(\1\2)', line)
        line = line.replace('^', '**')
        line = line.replace('log', 'log10')
        line = line.replace('ln', 'log')
        a = eval(line)
        stdout.write(format(a, '.5f')+'\n')
    except EOFError as e:
        break
    except SyntaxError:
        pass
    



