mydict={}
ran=int(input("enter the range of dict : \n"))+1

def createdict(mydict):
    for i in range(ran):
        key=141152+i
        print(f"enter marks for id no {key} seperated by commas:")
        marksipt=input()
        mylst=[int(x) for x in marksipt.split(",")]
        mydict[key]=mylst
    print(mydict)

createdict(mydict)

{141152: [78, 66, 90], 141153: [88, 65, 69], 141154: [77, 93, 64], 141155: [88, 65, 70], 141156: [77, 93, 65], 141157: [88, 65, 71], 141158: [77, 93, 66], 141159: [88, 65, 72], 141160: [77, 93, 67], 141161: [88, 65, 73], 141162: [77, 93, 68], 141163: [88, 65, 74], 141164: [77, 93, 69], 141165: [88, 65, 75], 141166: [77, 93, 70], 141167: [88, 65, 76], 141168: [77, 93, 71]}
# we only needed to do the hard code for this creation in dictionary question