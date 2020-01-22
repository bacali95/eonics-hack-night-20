n = int(input())
ch = str(input())
ans = [0] * n
for i in range(1, n-1):
    if ch[i] != ch[i - 1] and ch[i] != ch[i + 1]:
        ans[i] = -1
        if ans[i - 1] != -1:
            ans[i - 1] = 1
        if ans[i + 1] != -1:
            ans[i + 1] = 1

for i in range(0, n):
    if ans[i] == -1:
        print("losing")
    elif ans[i] == 1:
        print("winning")
    else:
        print("draw")
