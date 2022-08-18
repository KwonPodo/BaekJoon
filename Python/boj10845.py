import sys
from collections import deque 

q = deque()
n = int(sys.stdin.readline())
for _ in range(n):
    works = sys.stdin.readline().split()
    if len(works) == 1:
        work = works[0]
    else:
        work, num = works[0], works[1]
    
    if work == "push":
        q.append(num)
    elif work == "pop":
        if not len(q):
            print(-1)
        else:
            print(q.popleft())
    elif work == "size":
        print(len(q))
    elif work == "empty":
        print(0 if len(q) else 1)
    elif work == "front":
        print(q[0] if len(q) else -1)
    elif work == "back":
        print(q[len(q)-1] if len(q) else -1)