print('enter value of two numbers a and b ')
a=int(input('a=\n'))
b=int(input('b=\n'))
while a!=b:
    if a>b:
        a=a-b
    else:
        b=b-a
print('HCF or GDC of a and b',a)
