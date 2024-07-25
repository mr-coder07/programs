def palindrome(a):
    s=a[::-1]
    if(a==s):
        print('true')
    else:
        print('false')
n=input('enter the string ')
palindrome(n)
