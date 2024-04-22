boxes=int (input("enter no  of boxes :"))

rows=cols=boxes*5

for i in  range(rows):
    for j in range(cols):
        
        if i==j==0:
            print("+", end=" ")
        
        elif (i+1)%5==0 & (j+1)%5==0:
            print("+",end=" ")
        
        elif (i+1)%5!=0 & j==0 | (j+1)%5==0 :
            print("|", end=" ")
            
        elif  j==0 & (i+1)%5!=0 :
            print("|", end=" ")
            
        elif  i==0 & (j+1)%5!=0 | (i+1)%5==0:
            print("-",end=" ")
        
        elif (i+1)%5==0 & (j+1)%5!=0:
            print("-",end=" ")
            
        else:
            print(" ", end=" ")
    print()