print('enter 10 inputs')
a=int(input('value of a\n'))
b=int(input('value of b\n'))
c=int(input('value of c\n'))
d=int(input('value of d\n'))
e=int(input('value of e n'))
f=int(input('value of f\n'))
g=int(input('value of g\n'))
h=int(input('value of h\n'))
i=int(input('value of i\n'))
j=int(input('value of j\n'))
if a%2==0:
    a=0
else:
    a=a
if b%2==0:
    b=0
else:
    b=b
if c%2==0:
    c=0
else:
    c=c
if d%2==0:
    d=0
else:
    d=d
if e%2==0:
    e=0
else:
    e=e
if f%2==0:
    f=0
else:
    f=f
if g%2==0:
    g=0
else:
    g=g
if h%2==0:
    h=0
else:
    h=h
if i%2==0:
    i=0
else:
    i=i
if j%2==0:
    j=0
else:
    j=j    
value=a,b,c,d,e,f,g,h,i,j
max=max(value)
if max==0:
    print('no odd number')
else:
    print('max and largest odd number',max)
