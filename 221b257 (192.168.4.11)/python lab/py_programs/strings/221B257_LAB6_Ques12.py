import random
name = input("What is your name? ")
print("Good Luck ! ", name)
words = ['rainbow', 'computer', 'science', 'programming','python', 'mathematics', 'player', 'condition','reverse', 'water', 'board', 'father']
word = random.choice(words)


print("Guess the characters")

guesses = ''
turns = len(word)
while turns > 0:
	failed = 0
	for char in word:
		if char in guesses:
			print(char, end=" ")

		else:
			print("*",end='')
			failed += 1

	if failed == 0:
		print("You Win")
		print("The word is: ", word)
		break

	print()
	guess = input("guess a character:")
	guesses += guess
	if guess not in word:
		turns -= 1
		print("Wrong")
		print("You have", + turns," left")

		if turns == 0:
			print("You Loose")
			print('the word is ',word)
