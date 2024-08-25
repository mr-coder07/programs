import sys
ip = map(int,input("enter ip in binary").split("."))
for i in ip:
    print(sys.getsizeof(i))
    if (sys.getsizeof(i)==28) :
        continue
    else:
        print("incorrect ip ")
        break
print("correct ip")