n=int(input())
a,b,c = 3,-2, 4
for i in range(n//2): 

    print(a,b,sep=" ",end=' ') 

    a,b,c=a*3-4,b+c,c*5 

if n&1: 

    print(a,b,sep=" ") 

else: 

    print(a)
