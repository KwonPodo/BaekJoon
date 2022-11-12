def nm5(arr):
    if len(arr) == m:
        print(' '.join(map(str, arr)))
    for i in range(n):
        if l[i] not in arr:
            arr.append(l[i])
            nm5(arr)
            arr.pop()

n, m = map(int, input().split())
l = list(map(int, input().split()))
l.sort()
nm5([])