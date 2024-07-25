mylist = [1,[2,3],4,5,6]

for i in mylist:
    if isinstance(i, list):
        for j in i:
            print(j , end=" ")
    else:
        print(i , end=" ")



