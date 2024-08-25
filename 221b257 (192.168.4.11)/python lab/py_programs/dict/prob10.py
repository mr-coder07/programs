import dictionariescreated as ds 
namedict=ds.d1
maildict=ds.d6
citydict=homedict=ds.d2
mobdict=ds.d3
marksdict=ds.d5
statedict=ds.d4

def std_detail(domain):
    found=False
    for id,mail in maildict:
        if mail.__contains__(domain):
            print("enrol of std: ", id)
            print("name of std : ", namedict[id])
            print("mail of std : ", maildict[id])
            print("city of std : ", citydict[id])
            print("mob of std  : ", mobdict[id])
            print("marks of std: ", marksdict[id])
            print("state of std: ", statedict[id])
            found = True
            break
    if not found: 
        print(" record not found : ")
        
domain=input("enter domain : ")
std_detail(domain="gmail.com")