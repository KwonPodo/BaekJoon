import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    a, b, c = map(int, input().rstrip().split())
    m = float('inf')
    m = min(m, a**2 + (b + c)**2, b**2 + (a + c)**2, c**2 + (a + b)**2 )
    print(m)