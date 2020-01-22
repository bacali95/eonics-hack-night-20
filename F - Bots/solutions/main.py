def isCycle(a):
    global adj
    global vis
    if vis[a]:
        return True
    vis[a] = True
    if a in adj:
        for b in adj[a]:
            if isCycle(b):
                return True
    vis[a] = False
    return False

(n, e) = tuple(map(int, input().split()))
adj = dict()
for i in range(0, e):
    (a, b) = tuple(map(int, input().split()))
    a -= 1
    b -= 1
    if not a in adj:
        adj[a] = list()
    adj[a].append(b)

vis = []
for i in range(0, n):
    vis.append(False)

ok = True
for i in range(0, n):
    if isCycle(i):
        print("NO")
        ok = False
        break

if ok:
    print("YES")
