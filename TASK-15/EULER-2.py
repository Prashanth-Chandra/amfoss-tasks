import sys


t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    ans=0
    a=0
    b=1
    c=0
    while(n>c):
        
        c=a+b
        a=b
        b=c
        
        if(n>c):
            if(c%2==0):
                ans+=c
    print(ans)
