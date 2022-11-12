h1, m1, s1 = map(int, input().split(':'))
h2, m2, s2 = map(int, input().split(':'))
current = h1 * 3600 + m1 * 60 + s1
start = h2 * 3600 + m2 * 60 + s2

if start < current:
    start += 86400

r = start - current
r_h = r // 3600
r_m = (r % 3600) // 60
r_s = (r % 3600) % 60

print(f'{r_h:0>2}:{r_m:0>2}:{r_s:0>2}')