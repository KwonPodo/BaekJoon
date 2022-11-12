h, m, s = map(int, input().split())
t = int(input())
x = (3600 * h + 60 * m + s + t) % 86400

h = x // 3600
m = (x % 3600) // 60
s = (x % 3600) % 60

print(h, m, s)