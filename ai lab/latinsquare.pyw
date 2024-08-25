def check(matrix, size):
    for i in range(size):
        for j in range(size):
            if 0 <= matrix[i][j] < 10:
                for k in range(size):
                    if j != k and matrix[i][j] == matrix[i][k]:
                        print("Duplicate element found at index {},{} and {},{}".format(i, j, i, k))
                        return 
            else:
                print("Element is out of range at index {},{}".format(i, j))
                return


def entery(element , row , col , matrix ):
    
    if isinstance(matrix,list):
        matrix[row][col]=element
        return


def printmatrix(matrix):
    
    for i in matrix:
        print(i)    


size = int(input("enter the no. of columns : "))
c = "c"

matrix = [[c for i in range(size)]for j in range (size)]
print("initial matrix : ")
printmatrix(matrix)

condition = True

while condition == True :
    
    row = int(input("enter row : "))
    col = int(input("enter col : "))
    ele = int(input("enter ele : "))
    
    entery(ele,row,col,matrix)
    print("current matrix looks like : ")
    printmatrix(matrix)

    coundition = bool(input("would you like to continue (True / False ) :"))
    
submition = bool(input("would you like to submit ( Y / N ) :"))

if submition == "Y" or submition == "y":
    check(matrix,size)
else : 
    condition = True