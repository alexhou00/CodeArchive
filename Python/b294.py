from sys import stdin, stdout
stdout.write(str(sum([(i+1)*x for i, x in enumerate(map(int, stdin.readlines()[1].split()))])))
