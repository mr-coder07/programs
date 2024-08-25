string=input('enter the numbers in string ')
count=0
for i in string:
    if(i!=',' and i!='[' and i!=']'):
        tup=(i,)
        count=count+1
print('the length of string is ',count,'the string is ',string)
    
    
