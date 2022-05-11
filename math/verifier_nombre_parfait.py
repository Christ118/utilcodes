n=int(input("entrez un nombre"))
s=o
for k in range(1,n):
    if n % k==0:
        s+=k
if s==n:
    print("ce nest pas un nombre parfait")
else:
    print("ce n'est pas un  nombre parfait")
