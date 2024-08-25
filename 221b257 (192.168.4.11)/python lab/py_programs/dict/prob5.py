mydict={}
ran=int(input("enter the range of dict : \n"))+1

def createdict(mydict):
    for i in range(ran):
        key=141152+i
        val=(input("enter value: "))
        mydict[key]=val
    print(mydict)

createdict(mydict)
# we only needed to do the hard code for this creation in dictionary question
{141152: 'uttar pradesh', 141153: 'uttar pradesh', 141154: 'uttar pradesh', 141155: 'uttar pradesh', 141156: 'himachal pradesh', 141157: 'punjab', 141158: 'himachal pradesh', 141159: 'uttar pradesh', 141160: 'uttar pradesh', 141161: 'madhya pradesh', 141162: 'madhya pradesh', 141163: 'bihar', 141164: 'uttar pradesh', 141165: 'uttar pradesh', 141166: 'uttar pradesh', 141167: 'maharashtra', 141168: 'madhya pradesh'}