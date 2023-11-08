#! /usr/bin/env python3

import sys
import string

if len(sys.argv) > 3 or len(sys.argv) < 3:
	print("ERROR")
	sys.exit()
if not isinstance(sys.argv[1], str):
	print("ERROR")
	sys.exit()
for letter in sys.argv[2]:
	if not letter.isdigit():
		print("ERROR")
		sys.exit()
words = sys.argv[1].split()
final_list = []
nopunctuation = ""
for word in words:
	nopunctuation = word.translate(str.maketrans('', '', string.punctuation))
	final_list.append(nopunctuation)
result = []
for word in final_list:
	if len(word) > int(sys.argv[2]):
		result.append(word)
print(result)
