import sys
from collections import deque

input = sys.stdin.readline
t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    dq = deque(list(map(int, input().split())))

    cnt = 0
    while True:
        flag = False
        val = dq[0]
        for v in dq:
            if val < v: 
                flag = True
                break
        if flag: 
            dq.append(dq.popleft())
            if m == 0:
                m = len(dq) - 1
            else:
                m -= 1
        else:
            cnt += 1
            if m == 0:
                print(cnt)
                break
            else:
                dq.popleft()
                m -= 1