S=input('enter string of numbers ')
length=len(S)
flag=0
for i in range(length):
    if(S[0]=='[' and S[i]=='('):
        flag=3
        break
    elif(S[0]=='(' and S[i]=='['):
        flag=4
        break
    elif(S[0]=='['):
        flag=1
    elif(S[0]=='('):
        flag=2
    else:
        flag=0
if(flag==3):
    print('List, Tuple')
elif(flag==4):
    print('Tuple,List')
elif(flag==1):
    print('List')
elif(flag==2):
    print('Tuple')
else:
    print('invalid input')
    
