from sys import stdin

for s in stdin:
    row, column = map(int, s.split())
    
    rows = []
    new = []
    
    for i in range(row):
        rows.append(stdin.readline().strip().split())

    for j in range(column):
        new.append([])
        for k in range(row):
            new[j].append(rows[k][j])

    for l in new:
        print(*l)
        
