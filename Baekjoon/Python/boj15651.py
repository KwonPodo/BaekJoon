from itertools import product
from math import prod 

n, m = map(int, input().split())
l = [i for i in range(1, n+1)]

for c in product(l, l):
    print(*c)