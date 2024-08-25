def is_member(a,x):
    flag=False
    for i in a:
        if(i==x):
            flag=True
    if(flag==True):
        print('True')
    else:
        print('False')
n=input('enter numbers or string ')
m=input('enter single element ')
if(len(m)==1):
    is_member(n,m)
    
