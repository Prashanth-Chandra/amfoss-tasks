palin=[]
for i in range(100,1000):
    for j in range(100,1000):
        x=i*j
        if(str(x)==str(x)[::-1]):
            palin.append(x)
palin=list(set(palin))
palin.sort()

for i in range(0,int(input())):
    x=int(input())
    for j in range(len(palin)-1,-1,-1):#not 0 because if we take it as 0 it will stop at 1
        if(palin[j]<x):
            print(palin[j])
            break

        
