from math import log
lgdict={}
for i in range(1,51):
    val="{:2f}".format(log(i,2))
    lgdict[i]=val

print(lgdict)