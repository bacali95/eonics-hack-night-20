d=""
for _ in range(int(input())):
    s=input()
    if s=="pwd":print(d+"/")
    else:
        s=s.split()[-1]
        if s[0]=="/":s,d=s[1:],""
        for x in s.split("/"):
            if x=="..":d=d[:d.rfind("/")]
            else:d+="/"+x