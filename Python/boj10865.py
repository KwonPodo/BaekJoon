import sys
input = sys.stdin.readline

n, m = map(int, input().split())
fcnt = dict(zip(range(1, n+1), [0]*n))

for i in range(m):
    a, b = map(int, input().split())
    fcnt[a] = fcnt[a] + 1; fcnt[b] = fcnt[b] + 1

for v in fcnt.values():
    print(v)