ip = map(int,input().split("."))
for i in ip:
    if 0<=i<=255:
        continue
    else:
        print("incorrect ip ")
        break
    
first = ip[0]
if 0<=first<=127:
    print("class A")
if 128<=first<=191:
    print("class B")
if 192<=first<=223:
    print("class C")
if 224<=first<=239:
    print("class D")
if 240<=first<=255:
    print("class E")