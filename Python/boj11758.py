p1 = tuple(map(int, input().split()))
p2 = tuple(map(int, input().split()))
p3 = tuple(map(int, input().split()))

v1 = tuple([p2[0] - p1[0], p2[1] - p1[1]])
v2 = tuple([p3[0] - p2[0], p3[1] - p2[1]])
ans = v1[0]*v2[1] - v2[0]*v1[1]
if ans > 0:
    print(1)
elif ans < 0:
    print(-1)
else:
    print(0)