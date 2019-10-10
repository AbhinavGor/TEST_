w=input()
k=int(input())
c=a=i=j=0
x=len(w)
while a<x:
    if w[a]=="a" or w[a]=="e" or w[a]=="i" or w[a]=="o" or w[a]=="u":
        c=c+1
    a=a+1
ln=[]
while i<=x:
    j=0
    while j<=x:
        temp=w[i:j]
        if temp!="":
            ln.append(temp)
        j=j+1
    i=i+1
i=0
g=0
z=len(ln)
while i<z:
    j=0
    y=len(ln[i])
    f=0
    while j<y:
        if ln[i][j]=="a" or ln[i][j]=="e" or ln[i][j]=="i" or ln[i][j]=="o" or ln[i][j]=="u":
            f=f+1
        j=j+1
    if f==k:
        g=g+1
    i=i+1
print(g)
