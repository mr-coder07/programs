ip = map(int,input("enter ip in binary").split("."))
for i in ip:
    if (i in (0 or 1) and len(i)==8 ) :
        continue
    else:
        print("incorrect ip ")
        break

#let the code be 10000001 for starting and ending flag

newcode = code = "".join(ip)
print(code)

#encryption
for a,b,c,d,e in code:
    a,b,c,d,e,f = code[0],code[1],code[2],code[3],code[4],code[5]
    if a==b==c==d==e==f==0:
        c=1
        continue

    
    print("successfully encrypted")
#decription
for a,b,c,d,e in code:
    a,b,c = code[0],code[1],code[2]
    if a==b==0 and c==1:
        c=0
        continue

if code==newcode:
    print("decrypted successfully")
