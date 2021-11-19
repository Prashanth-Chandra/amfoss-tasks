n_m_list=list(map(int,input().split()))
pod=list(map(int,input().split()))
pos=list(map(int,input().split()))

pos.sort()
pod.sort()

min_powers = 0 
i = 0
n = n_m_list[0]
for j in range (0,n_m_list[1]):
    
    if(pod[i]<pos[j]):
        i+=1
        min_powers+=pos[j]
    if(i==n):
        break
        
if(i==n_m_list[0]):
    print("YES")
    print(min_powers)
else:
    print("NO")