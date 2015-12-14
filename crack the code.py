res1 = []
res3 = []
res5 = []
res7 = []
N=10001
for i in range(0,N):
    res1.append(0)
    res3.append(0)
    res5.append(0)
    res7.append(0)
res1[1]=1
res3[1]=1
res5[1]=1
res7[1]=1
for i in range(2,N):
    res1[i]=res3[i-1]
    res3[i]=res1[i-1]+res7[i-1]
    res5[i]=res3[i-1]+res7[i-1]
    res7[i]=res5[i-1]
t=input()
while (t>0):
    n=input()
    print (res1[n]+res3[n]+res5[n]+res7[n])
    t-=1
    
    