t = int(input())
for i in range(0, t):
    tup = list(map(int, input().split()))
    arr = list(map(int, input().split()))
    n = tup[0]
    v = tup[1]
    l = tup[2]
    j = 0
    nbr = 0
    while j < v:
        nbr += arr[j]
        j += 1
    mn = nbr
    while j < n:
        nbr -= arr[j - v]
        nbr += arr[j]
        mn = min(mn, nbr)
        j += 1
    print(l - mn)
