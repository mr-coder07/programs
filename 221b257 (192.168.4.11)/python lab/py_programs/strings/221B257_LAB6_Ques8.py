def translate(a):
    count=0
    x=""
    for i in a:
        count=count+1
    for i in range(0,count):
        if a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u':
            b=a[i]
            x=x+b
        elif a[i]!=' ':
            b=a[i]+'o'+a[i]
            x=x+b
        elif a[i]==' ':
            x=x+a[i]
    print(x)
n=input('enter the message ')
translate(n)
            
