print('enter a number x')
x=int(input('value of x'))
for i in range(2,x):
    if i**3==x:
        print('perfect cube')
    else:
        print('not perfect cube')
