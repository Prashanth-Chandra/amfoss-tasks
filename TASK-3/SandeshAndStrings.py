l=int(input())
s=input()
original=str(s)
x=list(s)
x.sort()
x_no_dup=list(set(x))
x_no_dup.sort()
#print(x)
#print(x_no_dup)
cont=0
middle=''
for i in range(0,len(x_no_dup)):
    m=x_no_dup[i]
    c=0
    c=x.count(m)
    if(c%2==1 and cont==1):
        x.remove(x_no_dup[i])
        continue
    if(c%2==1):
        cont=1
        middle=x_no_dup[i]
        x.remove(x_no_dup[i])
#print(x)
#print(original)
ans=""
print(len(x)+len(middle))
for i in range(0,len(s)):
    ab=s[i]
    #print(ab,x.count(ab))
    if(x.count(ab)>0 and x.count(ab)/2>=1.0):
        print(ab,end="")
        ans+=ab
        x.remove(ab)
        x.remove(ab)
print(middle,end="")
for i in range(1,len(ans)+1):
    print(ans[-i],end="")
        