from sys import stdin, stdout

n = int(stdin.readline())

primes = ( 2,  3,  5,  7, 11,
          13, 17, 19, 23, 29,
          31, 37, 41, 43, 47,
          53, 59, 61, 67, 71,
          73, 79, 83, 89, 97)
product = 2305567963945518424753102147331756070

for _ in range(n):
    a = int(stdin.readline())
    a %= product
    lst = [i for i in primes if a%i == 0]
    if len(lst) != 0: stdout.write(" ".join(map(str, lst))+'\n')
    else: stdout.write("Terrible Silence...\n")
