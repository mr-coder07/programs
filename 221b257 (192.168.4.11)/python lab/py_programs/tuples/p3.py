num1=int(input("enter number "))
num2=int(input("enter number "))
num3=int(input("enter number "))

if num1< num2+num3  and num2< num1+num3  and num3< num2+num1 :
    print("they can form a triangle") 
else:
    print ("the can't ")