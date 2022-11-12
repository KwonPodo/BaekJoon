from itertools import combinations as cb

n, m = map(int, input().split())
l = list(map(int, input().split()))
l.sort()
for c in cb(l, m):
    print(*c)