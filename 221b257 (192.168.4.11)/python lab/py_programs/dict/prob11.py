import dictionariescreated as ds
namedict=ds.d1
maildict=ds.d6
citydict=homedict=ds.d2
mobdict=ds.d3
marksdict=ds.d5
statedict=ds.d4

def std_detail():
    found=False

    print("users with bsnl sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==94:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True
    print("users with airtel sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==98:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True
    print("users with idea sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==89:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True
    print("users with realiance sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==77:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True
    print("users with idEA sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==97:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True
    print("users with voda sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==99:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True
    print("users with docoo sim")
    for enroll, mob in mobdict.items():
        if mob//100000000==79:
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])
            found=True

    if not found:
        print("record does not exsist ")

std_detail()