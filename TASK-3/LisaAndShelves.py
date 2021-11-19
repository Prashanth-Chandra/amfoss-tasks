import math
n=int(input())
ans=0
is_perfect_square=0
sqrt=int(math.sqrt(n))
if(sqrt*sqrt==n):
    is_perfect_square+=1
for i in range(1,sqrt+1):
    if(n%i==0):
        ans+=1
    
print((ans*2)-is_perfect_square)