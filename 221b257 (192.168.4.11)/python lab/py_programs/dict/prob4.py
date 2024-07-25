mydict={}
ran=int(input("enter the range of dict : \n"))+1

def createdict(mydict):
    for i in range(ran):
        key=141152+i
        val=int(input("enter value: "))
        mydict[key]=val
    print(mydict)

createdict(mydict)
# we only needed to do the hard code for this creation in dictionary question


{141152: 9856687466, 141153: 9856687466, 141154: 8946687466, 141155: 7756687412, 141156: 9956687413, 141157: 8856687414, 141158: 7156687415, 141159: 9156687416, 141160: 9956687417, 141161: 6656687418, 141162: 9856687419, 141163: 9856687420, 141164: 9856687421, 141165: 3356687422, 141166: 9856687423, 141167: 8836687424, 141168: 9856687425}