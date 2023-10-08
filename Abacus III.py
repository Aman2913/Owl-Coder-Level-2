n,m=map(int,input().split())
l=[]
for _ in range(n):
    l.append(list(map(int,input().split())))
k=[0 for _ in range(m)]
for i in range(n):
    for j in range(m):
        if i==0:
            if l[i][j]==1:
                k[j]+=5
        else:
            if l[i][j]==1:
                k[j]+=1
for i in k:
    print(i,end='')
