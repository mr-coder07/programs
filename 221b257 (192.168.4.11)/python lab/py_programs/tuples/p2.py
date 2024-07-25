gems = ("Emerald", "Ivory" , "jasper","Ruby", "Garnet")
prices = (1760,2119,1599,3920,3999)
count = bill = 0 

ans="y"

print("                    available gems are ")

for i in gems : 
    print(i)

while ans=="y":

    gem= input("\n please enter the gem you desire : ")


    if gems.__contains__(gem)==True:
        ind = gems.index(gem)

    else:
        print(" gem is not present ")
        count=1

    bill+= prices[ind]

    print("would you like to continue shopping ?? ")
    ans = input(" please answer in y or n : ")
    if ans== "n":
        ans="n"
        break
if count==1:
    bill=0
elif bill > 30000:
    bill+= 0.5*bill
print("total amount of bill is ", bill)