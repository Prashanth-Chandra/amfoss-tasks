s,m=map(int,input().split())
n=s
k=0
while(n>1):
    if(n%2 ==0):
        k+=1
    else:
        break
    n = n/2
k-=1
if(s%2==0):
    i=1
    x=[]
    while(i<=m):
        x.append(i)#,end=" ")
        i+=2
    nu=0
    a=len(x)
    while(nu<a):
        t=x[nu]
        temp = k;
        t=t*2;
        while(t<=m and temp>0):
            temp-=1
            x.append(t)
            t =t*2
        nu+=1
      
    print(len(x))   
    x.sort()
    print(*x,sep=" ")
else:
    print(0)