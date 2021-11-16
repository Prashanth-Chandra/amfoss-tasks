import sys
import math

t = int(input().strip())

def LCM(arr):
    lcm=arr[0]
    for i in range(1,len(arr)):
        lcm*=arr[i]//(math.gcd(lcm, arr[i]))
    return lcm

for a0 in range(t):
    i = int(input().strip())
    arr=[]
    for m in range(1,i+1):
        arr.append(m)
    print(LCM(arr))
