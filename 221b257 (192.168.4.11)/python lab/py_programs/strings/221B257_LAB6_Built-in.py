#part A
my_string=" jaypee university of engineering and technology"
b=len(my_string)
print(my_string[b:0:-1])

#part B
my_string=" jaypee university of engineering and technology"
count=0
for i in my_string:
    if(i==' '):
        count=count+1
print(count)

#part C
my_string="jaypee university"
my_string2=" of engineering and technology"
print(my_string + my_string2)

#part D
my_string="jaypee"
my_string2="jaypee"
if(my_string==my_string2):
    print("yes")
else:
    print("no")

#part E
string='palak gupta 221B258'
b=input("enter substring ")
if b in string:
    print("yes it is present ")
b=string.find(b)
print("it's index is ",b)

#part F
my_string="jaypee university"
print(my_string.upper())

#part G
my_string="I AM ANGRYYYYY"
print(my_string.lower())

#part H
string=input("input desired string ")
print(string.count('a'))
