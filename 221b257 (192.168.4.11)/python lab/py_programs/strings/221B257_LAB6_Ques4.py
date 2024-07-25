def max_of_three(a,b,c):
    if(a>b and a>c):
        print(a,' is the largest of all')
    elif(b>c and b>a):
        print(b,' is the largest of all')
    elif(a==b and b==c):
        print('all are equal')
    elif(a==b and a>c):
        print(a,' and ',b,' are equal and greater than ',c)
    elif(a==b and c>a):
        print(a,' and ',b,' are equal and ',c,' is greater than both ')
    elif(b==c and b>a):
        print(b,' and ',c,' are equal and greater than ',a)
    elif(b==c and a>b):
        print(b,' and ',c,' are equal and ',a,' is greater than both ')
    elif(a==c and a>b):
        print(a,' and ',c,' are equal and greater than ',b)
    elif(a==c and b>a):
        print(a,' and ',c,' are equal and ',b,' is greater than both ')
    else:
        print(c,' is largest of all')

while True:
    try:
        n=int(input('enter first number '))
        m=int(input('enter second number '))
        l=int(input('enter third number '))
    except ValueError:
        print("enter integer type input")
        continue
    else:
        break
max_of_three(n,m,l)
    
