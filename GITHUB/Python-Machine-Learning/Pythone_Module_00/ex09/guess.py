#! /usr/bin/env python3

import sys
import random

guess = random.randint(1, 99)
print("This is an interactive guessing game!\nYou have to enter a number between 1 and 99 to find out the secret number.\nType 'exit'to end the game.\nGood luck!\n")
string = ""
attempts = 1
while string != str(guess):
	print("What\'s your guess between 1 and 99?")
	string = str(input())
	if string == "exit":
		print("Goodbye!")
		sys.exit() 
	elif not string.isdigit():
		print("That's not a number.")
	elif int(string) == guess:
		break
	elif int(string) > guess:
		print("Too high!")
	elif int(string) < guess:
		print("Too low!")
	attempts += 1
if (guess == 42 and attempts == 1):
	print("The answer to the ultimate question of life, the universe and everything is 42.\nCongratulations! You got it on your first try!")
else:
	print(f"Congratulations, you\'ve got it!\nYou won in {attempts} attempts!")