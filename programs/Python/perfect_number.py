n=int(input("Enter a no. -"))
k=0
for i in range(1,n):
    if (n%i==0):
        k=k+i
if(k==n):
    print("This is a perfect number.")
else:
    print("Not a perfect number")
