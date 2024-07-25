mylist=[]
r=int(input("enter range of list : "))
def getval(mylist, r):
    for i in range(r):
        mylist.append(int(input("enter list values: ")))

def printlist(mylist):
    for i in mylist:
      if isinstance(i, list):
          for j in i:
              print(j , end=" ")
      else:
          print(i , end=" ")

def swap(myist,i,j):
    mylist[i],mylist[j]=mylist[j],mylist[i]

def minandmaxindex(mylist):
    ran = len(mylist)
    mylist.sort()
    minid= 0
    maxid = ran-1
    return minid,maxid
#getting values in mylist 

getval(mylist,r)

#min and max indexes
i,j = minandmaxindex(mylist)

# printing the original list

printlist(mylist)

#printing min and max values of list

print(mylist[i],mylist[j])

#swaping values

swap(mylist,i,j)

#printing mylist after swaping 

printlist(mylist)