import sys

a, b, c = sys.stdin.readline().split()
a, b, c = int(a), int(b), int(c)
D = b**2-(4*a*c)

if D > 0:
    x1 = int((-b+D**0.5)/(2*a))
    x2 = int((-b-D**0.5)/(2*a))
    print("Two different roots x1=%d , x2=%d" % (x1, x2))
elif D == 0:
    x = int(-b/(2*a))
    print("Two same roots x=%d" % x)
else:
    print("No real root")
