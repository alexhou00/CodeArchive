import sys

ciphertext = sys.stdin.readline()

print(''.join(chr(ord(i)-7) for i in ciphertext))
