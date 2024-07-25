mydict={}
def createdict(mydict):
    for i in range(1,8):
        mydict[i]=input(f"enter the {i}th day : \n")
        
createdict(mydict)
print(mydict)
#we only need hard coded dictionary for this question

{1: 'sunday', 2: 'monday', 3: 'tuesday', 4: 'wednesday', 5: 'thursday', 6: 'friday', 7: 'saturday'} 