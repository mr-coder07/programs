mydict={}
ran=int(input("enter the range of dict : \n"))+1

def createdict(mydict):
    for i in range(ran):
        key=141152+i
        val=input("enter value: ")
        mydict[key]=val
    print(mydict)

createdict(mydict)
# we only needed to do the hard code for this creation in dictionary question


{141152: 'jhansi ', 141153: 'kanpur', 141154: 'lucknow ', 141155: 'agra', 141156: 'shimla', 141157: 'chandigarh', 141158: 'mandi', 141159: 'kanpur', 141160: 'mathura', 141161: 'guna', 141162: 'bhopal ', 141163: 'patna', 141164: 'gorakhpur', 141165: 'lucknow ', 141166: 'kanpur', 141167: 'nagpur',141167:"bhopal"}