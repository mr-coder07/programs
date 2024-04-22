import ques1 as arra
def insertionsort(arr):
    length=len(arr)
    for i in range(length-1):
        key=arr[i]
        j=i-1
        print("pass ", i , " is  : ")
        for k in range(length-1):
            print(arr[k],end=",")
        print()
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key
    return arr
myarray = arra.createarray(9)
print("Before sorting:\n", myarray)
print("After sorting:")
print(insertionsort(myarray))