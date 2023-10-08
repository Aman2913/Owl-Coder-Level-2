n=int(input()) 

l=list(map(str,input().split())) 

s=input() 

x=0 

for i in range(len(l)): 

    if len(l[i])<len(s): 

        for j in range(0,len(l)): 

            if l[i]+l[j]==s: 

                x+=1 

print(x)
