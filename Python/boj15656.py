def nm7(arr):
    if len(arr) == m:
        print(' '.join(map(str, arr)))
        return
    
    for i in range(n):
        arr.append(l[i])
        nm7(arr)
        arr.pop()

n, m = map( int, (input().split()) )
l = list(map(int, input().split()))
l.sort()
nm7([])