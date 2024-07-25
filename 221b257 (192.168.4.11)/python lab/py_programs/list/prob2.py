mylist= []
x=1
count = 0
while x :
    element = int(input("enter element : "))
    mylist.append(element)
    x=int(input("wanna enter : "))
    if x ==0 :
        break
    
for i in range(len(mylist)):
    if i == mylist[i]:
        count+=1
        
print(count)