from random import randrange as rr
def counting_sort(arr):
    max_element = max(arr)
    count = [0]*(max_element+1)
    
    for element in arr:
        count[element]+=1
    
    print("count  list : " ,count)
    
    sorted_list=[]
    for i in range(len(count)):
        while count[i] > 0 :
            sorted_list.append(i)
            count[i]-=1
    return sorted_list
        
my_list=[]
for i in range(10):
    my_list.append(rr(1,10))

print("Original List:", my_list)

sorted_list = counting_sort(my_list)

print("Sorted  List: ", sorted_list)

