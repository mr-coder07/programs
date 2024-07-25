def firstNonRepeater(str1):
    l = len(str1)
    #flag = 0
    for i in range(l):
        flag = 0
        for j in range(l):
            if str1[i] == str1[j] and i != j:
                flag = 1
                break
        if flag == 0:
            print("First non-repeating character is :", str1[i])
            break

    if flag == 1:
        print("No non-repeating character")
a=input()
firstNonRepeater(a)
