import sys

t=int(input())


for i in range(0,t):

    t=int(input())-1

    x=t//3

    y=t//5

    z=t//15

    x1=3*x*(x+1)//2

    y1=5*y*(y+1)//2

    z1=15*z*(z+1)//2

    print(int(x1+y1-z1))
