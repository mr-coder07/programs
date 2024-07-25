print('enter three numbers')
n1=int(input('value of n1\n'))
n2=int(input('value of n2\n'))
n3=int(input('value of n3\n'))
if n1>n2 and n2>n3:
    largest=n1
elif n2>n1 and n2>n3:
    largest=n2
else:
    largest=n3
print('value of largest number',largest)    
    
