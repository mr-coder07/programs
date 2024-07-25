def factoral(num=1):
    if num == 1 :
        return 1
    else:
        
        return num*factoral(num-1)
    
number= int(input("enter no. : "))
print(factoral(number))