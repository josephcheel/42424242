#! /usr/bin/env python3

import sys
import string

def text_analyzer(text):
	char = len(text)
	print(f"The text contains {char} character(s):")
	info = {
		'upper' : 0, 'lower' : 0, 'punctuation' : 0, 'space' : 0}
	for letter in text:
		if letter.isupper():
			info['upper'] += 1
		elif letter.islower():
			info['lower'] += 1
		elif letter in string.punctuation:
			info['punctuation'] += 1
		elif letter.isspace():
			info['space'] += 1
	print(f"- {info['upper']} upper letter(s)")
	print(f"- {info['lower']} lower letter(s)")
	print(f"- {info['punctuation']} punctuation mark(s)")
	print(f"- {info['space']} space(s)")

if __name__ == "__main__":
    text_analyzer(sys.argv[1])
