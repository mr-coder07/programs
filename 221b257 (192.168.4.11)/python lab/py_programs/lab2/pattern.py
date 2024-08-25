
# Take the Input from the User
rows = 11
columns = 11

# Print the Output
print("Hollow Boxs Star Pattern")

for i in range( rows):
    for j in range( columns ):
        if(j%5 == 0 or i%5 == 0):
            print('+', end = '  ')
        elif (i%5==0 and j%5!=0):
            print("|", end="  ")
        else:
            print(' ', end = '  ')
    print()