print('enter two numbers a and b\n')
a=int(input('value of a'))
b=int(input('value of b'))
if a>b:
    min=a
else:
    min=b
while(1):
    if min%a==0 and min%b==0:
        break
print(min)
