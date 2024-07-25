def vowels(a):
    b=['a','e','i','o','u']
    for i in range(0,len(b)-1):
        flag=0
        if(a==b[i]):
            print("it is a vowel")
            break
        else:
            print('it is a consonant')
            break
c=input("enter a character ")
if(len(c)==1):
    vowels(c)
else:
    print('invalid input')
