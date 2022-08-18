import sys
from collections import deque

input = sys.stdin.readline
dq = deque()
n = int(input())
for _ in range(n):
    cmd = input().rstrip()
    if cmd[1] == 'u':
        todo, n = cmd.split(); n = int(n)
        if todo.split('_')[1] == "back":
            dq.append(n)
        else:
            dq.appendleft(n)
    elif cmd[1] == 'o':
        if cmd.split('_')[1] == "back":
            if len(dq):
                print(dq.pop())
            else:
                print(-1)
        else:
            if len(dq):
                print(dq.popleft())
            else:
                print(-1)
    elif cmd[1] == 'i':
        print(len(dq))
    elif cmd[1] == 'm':
        print(0 if len(dq) else 1)
    elif cmd[1] == 'r':
        print(dq[0] if len(dq) else -1)
    elif cmd[1] == 'a':
        print(dq[-1] if len(dq) else -1)
