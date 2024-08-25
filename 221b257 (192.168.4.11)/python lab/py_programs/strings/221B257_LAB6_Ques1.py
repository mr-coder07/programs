def fibonacci(a):
    n1=0
    n2=1
    print("0 ","1",end=" ")
    for i in range(a):
        sum1=n1+n2
        print(sum1,end=" ")
        n1=n2
        n2=sum1
        
n=int(input("enter the number of fibbonacci numbers you want "))
fibonacci(n)
        
        
        
    


