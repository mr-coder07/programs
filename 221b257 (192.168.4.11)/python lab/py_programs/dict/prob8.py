import dictionariescreated as ds 
namedict=ds.d1
maildict=ds.d6
citydict=homedict=ds.d2
mobdict=ds.d3
marksdict=ds.d5
statedict=ds.d4
#############################################----part a----############################################
def std_detaila(enroll):
    found=False
    for menroll,email in maildict.items():
        if menroll == enroll:
            print("email of the student is : ", maildict[enroll])
            print("name of the student is : ", namedict[enroll])
            found=True
    if not found:
        print("data not found ")
        
enroll=int(input("enter enroll: "))
std_detaila(enroll)
    
#############################################----part b----############################################
def std_detail(email):
    found = False  # Flag to indicate if the email is found
    for enroll, mailid in maildict.items():
        if mailid == email:
            print("Enrolment of student:", enroll)
            print("Name of student:", namedict[enroll])
            found = True
            break 

    if not found:
        print("No data found with this email.")

email=input("enter email : ")
while std_detail(email):
    print("conguratulations you've made a successful prog for the first time")
   
############################################-----part c-----############################################

def std_detailb(mobile):
    found=False
    for enroll, Dmobile in citydict.items():
        if Dmobile==mobile:
            print("name of student : ",namedict[enroll])
            print("name of the city : ",citydict[enroll])
            found=True
            break
    if not found:
        print("details not found ")
mobile=int(input("enter mobile: "))
std_detailb(mobile)
            

############################################-----part d-----############################################

def std_detaild(hometown):
    found=True
    for enroll,dhome in homedict.items():
        if dhome==hometown:
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

homet=input("enter hometown ")
std_detailsd(homet)