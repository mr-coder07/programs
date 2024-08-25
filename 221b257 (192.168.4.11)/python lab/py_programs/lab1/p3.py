p=float(input('enter principle'))
t=float(input('enter time'))
r=float(input('enter rate'))
simple_interest=(p*t*r)/100
compound_interest=p*((1+r/100)**t-1)
print('simple interest',simple_interest)
print('compound interest',compound_interest)
