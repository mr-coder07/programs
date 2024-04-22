#=====================================================
#This program is written by [OM DUTT MISHRA (221b257)]
#=====================================================
def isWordPresent(sentence, word):

    # To break the sentence in words
    s = sentence.split(" ")

    for i in s:

        # Comparing the current word
        if (i == word):
            return True
    return False

s = "Geeks for Geeks is a group for om"
word = "om"

if (isWordPresent(s, word)):
    print("Yes")
else:
    print("No")
