import dictionariescreated as ds 
namedict=ds.d1
maildict=ds.d6
citydict=homedict=ds.d2
mobdict=ds.d3
marksdict=ds.d5
statedict=ds.d4

def std_detaild(state):
    found=True
    for enroll,dstate in statedict.items():
        if dstate==state:
            print("hometown : ",hometown[enroll])
            print("enroll : ",enroll)
            print("city :", citydict[enroll])
            print("name : ", namedict[enroll])
            print("mail : ",maildict[enroll])
            print("state : ", statedict[enroll])
            print("marks : " , maildict[enroll])
            found = False
    if not found:
        print("record not found ")

city=input("enter city :  ")
std_detailsd(city)