import sys
import math

def max_fact(n):
    maxPrime=-1
    while(n%2==0):
        maxPrime=2
        n=n/2
    for i in range(3,int(math.sqrt(n))+1,2):
        while(n%i==0):
            maxPrime=i
            n=n/i
    if(n>2):
        maxPrime=n 
    return int(maxPrime)
  

t=int(input())
for i in range(t):
    n=int(input())
    print(max_fact(n))
