from sys import stdin

for line in stdin:
    n, m = map(int, line.split())
    sum_ = n
    n += 1
    times = 1
    while sum_ <= m:
        times += 1
        sum_ += n
        n += 1
    print(times)    
    
    
