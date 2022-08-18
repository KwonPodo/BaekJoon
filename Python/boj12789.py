n = int(input())
l = list(map(int, input().split()))

i = 1
while l:
    idx = l.index(i)

    if l[:idx] == sorted(l[:idx], reverse=True):
        l.remove(i)
        i += 1
    else:
        break

print('Sad' if len(l) else 'Nice')