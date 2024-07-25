def compountintrest(principle=0, rate=1 , time=1 ):
    ci= principle*(1+ (rate/100))
    ci = pow(ci,time)
    return ci

print(compountintrest(100,20,2))