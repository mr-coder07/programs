import ques1 as arr 
def bubblesort(arr):
    length = len(arr)
    for i in range(length-1):
        for j in range(length-2-i):
            if arr[j]>arr[j+1]:
                val= arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=val
        print("pass ", i , "is  : ")
        for k in range(length):
            print(arr[k] , end=",")
        print()
    print(arr)
    
myarray=arr.createarray(9)
print("originally my array was\n",myarray)
print("after updation : ")
bubblesort(myarray)