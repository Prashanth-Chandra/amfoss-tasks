n=int(input())
w=list(map(int,input().split()))
w_nodup=set(w)
#print(w_nodup)
w_most=max(set(w), key = w.count)
print(w.count(w_most),len(w_nodup))