mydict={}
ran=int(input("enter the range of dict : \n"))+1

def createdict(mydict):
    for i in range(ran):
        key=141152+i
        val=input("enter value: ")
        mydict[key]=val
    print(mydict)

createdict(mydict)

{141152: 'sanjayjain@gmail.com', 141153: 'abhinavagarwal@gmail.com', 141154: 'abhisheknigam@gmail.com', 141155: 'adityaarora@gmail.com', 141156: 'adityashrivastava@gmail.com', 141157: 'adityathakur@gmail.com', 141158: 'amitkymar@gmail.com', 141159: 'aashijain@gmail.com', 141160: 'deepaksingh@gmail.com', 141161: 'mahendrasingh@gmail.com', 141162: 'vijaykumar@gmail.com', 141163: 'adityapandey@gmail.com', 141164: 'adityakumar@gmail.com', 141165: 'aditibharadwaj@gmail.com', 141166: 'anupkumarnigam@gmail.com', 141167: 'abhishekchatterjee@gmail.com', 141168: 'abhimanyusingh@gmail.com'}
# we only needed to do the hard code for this creation in dictionary question