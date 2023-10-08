n=input()
m=len(n)
s=list(map(int,n))
k=[[0]*m for _ in range(5) ]
for i in range(5):
    for j in range(m):
        if i==0:
            if s[j] >=5:
                k[i][j]=1
                s[j]-=5
        else:
            if s[j] >=1:
                k[i][j]=1
                s[j]-=1
for i in k:
    print(*i)
