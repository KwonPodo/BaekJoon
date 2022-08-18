from itertools import combinations as cb

n, s = map(int, input().split())
numbers = list(map(int, input().split()))

cnt = 0
for i in range(1, n+1):
    for t in cb(numbers, i):
        numbers_sum = sum(t)
        if (s == numbers_sum):
            cnt += 1
print(cnt)