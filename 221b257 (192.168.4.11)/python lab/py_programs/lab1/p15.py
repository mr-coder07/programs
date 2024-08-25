num=int(input('value of n'))
count=0
n=1
print('enter n digit number:\n')
num=n
while(num!=0):
    num=num/10
    count=count+1
for i in range(1,count):
    n=n*10
    n=n+1
add=num+n
print('new sum',add)
