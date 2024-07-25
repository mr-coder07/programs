def prime(a,b):
    
    for i in range(a,b):
        flag=False
        for j in range(2,i-1):
            if(i%j==0):
                flag=True
        if(flag==False):
            print(i)
n=int(input("enter first number of the range "))
m=int(input("enter last number of the range "))
prime(n,m)
