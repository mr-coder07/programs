mydict={}
ran=int(input("enter the range of dict : \n"))

def createdict(mydict):
    for i in range(ran):
        key=141152+i
        val=input("enter value: ")
        mydict[key]=val
    print(mydict)

createdict(mydict)

# we only needed to do the hard code for this creation in dictionary question

{141152: 'sanjay jain', 141153: 'abhinav agarwal', 141154: 'abhishek nigam', 141155: 'aditya arora', 141156: 'aditya shrivastava', 141157: 'aditya thakur ', 141158: 'amit kumar', 141159: 'aashi jain', 141160: 'deepak singh', 141161: 'mehendra singh', 141162: 'vijay kumar', 141163: 'aditya pandey', 141164: 'aditi bhardwaj ', 141165: 'anup kumar nigam', 141166: 'abhishek chatterjee', 141167: 'abhimanyu singh'}