from math import sqrt
rootlist=[]

for i in range(21,31):
    rootval="{:2f}".format(sqrt(i))
    rootlist.append(rootval)

print(rootlist)