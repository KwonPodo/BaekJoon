from itertools import combinations_with_replacement as cbwr

n, m = map(int, input().split())
numbers = [i for i in range(1, n+1)]

for arr in cbwr(numbers, m):
    print(' '.join(map(str, arr)))