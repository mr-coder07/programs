enroll=[]
name=[]

for i in range(10):
    enroll.append(int (input(f"enter enroll for student {i}: ")))
    name.append( input(f"enter name for student {i}"))

search=int(input("enter roll to be seached: \n"))

if enroll.__contains__(search):
    index=enroll.index(search)
    print(name[index])
else:
    print(-1)