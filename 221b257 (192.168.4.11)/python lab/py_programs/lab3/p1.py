squares= int(input(" how many squares in the row of the pattern you want ? \n"))

if squares>0:

    pos=5*squares
    rows=pos
    for i in range(rows):
        while i==1 or i%5==0:
             print("-",end= " ")
            
        for j in range(pos):
             print("")
        if i==1 or i%5==0:
            
                print("+",end=" ")            
        print("")

