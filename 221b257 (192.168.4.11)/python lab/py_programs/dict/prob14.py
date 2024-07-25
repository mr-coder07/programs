import dictionariescreated as ds
namedict=ds.d1
maildict=ds.d6
citydict=homedict=ds.d2
mobdict=ds.d3
marksdict=ds.d5
statedict=ds.d4



def std_detail():
    
    marklist={}

    for enroll , marks in marksdict.items():
        mmark=marks[2]
        marklist[enroll]=mmark
    
    maxmark=max(marklist.values())
    
    found=False

    for enroll, mark in marklist.items():
        if mark==maxmark:
            found=True
            print("      std with max mark in maths ")
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])

    if not found:
        print("record not found ")


std_detail()