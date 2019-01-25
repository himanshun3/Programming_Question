n=int(input())
for i in range(n):
    str=input()
    str=str.split(.)
    n=len(str)
    b=""
    for i in range(n):
        b=b+str[n-i-1]+"."
        
print(b)
        