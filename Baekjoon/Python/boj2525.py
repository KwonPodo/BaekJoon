h, m = map(int, input().split())
d = int(input())

x = (h * 60 + m + d) % 1440
h = x // 60
m = x % 60

print(h, m)