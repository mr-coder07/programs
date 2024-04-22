import dictionariescreated as ds 
import statistics

namedict=ds.d1
maildict=ds.d6
citydict=homedict=ds.d4
mobdict=ds.d3
marksdict=ds.d5
statedict=ds.d4



def avgmarkdict(marksdict):
    
    avgmarks={}
    
    for enroll,marks in marksdict.items():

        marklist=marksdict[enroll]
        average = statistics.mean(marklist)
        avgmarks[enroll]=average
        
    return avgmarks



def std_details(avgmark):
    maximum_marks=max(avgmark.values())
    for enroll , marks in avgmark.items():
        if marks==maximum_marks:
            print("maximum avg marks gained by all the student is ", maximum_marks)
            print("enroll of the student ", enroll)
            print("name of the student ", namedict[enroll])
            print("marks of the student " , marksdict[enroll])
            print("city of the student " , citydict[enroll])
            print("mail of the student ", maildict[enroll])
            print("state of the student ", statedict[enroll])
            print("mobile no of the student ", mobdict[enroll])


avgmark=avgmarkdict(marksdict)
print("student detail : ")
std_details(avgmark)