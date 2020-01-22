t = int(input())
for i in range(0, t):
    words = list(map(str, input().split()))
    ma = {}
    j = 0
    for word in words:
        if not word in ma:
            ma[word] = j
        if word[0] == '-':
            if word[1:] in ma:
                del ma[word[1:]]
                del ma[word]
        else:
            if "-" + word in ma:
                del ma["-" + word]
                del ma[word]
        j += 1
    print(' '.join(ma.keys()))
