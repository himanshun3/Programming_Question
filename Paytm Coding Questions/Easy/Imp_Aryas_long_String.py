S="ABA"
K=3
N=5
temp=""
C="B"
count=0
for i in range(K):
    temp=temp+S
    
for i in temp[:N]:
    if i==C:
        count=count+1
        
print(temp)
print(count)