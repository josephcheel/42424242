#! /usr/bin/env python3

import sys

sos = {
	"A"	: "-.",
	"B"	: "-...",
	"C"	: "-.-.",
	"D"	: "-..",
	"E" : ".",
	"F" : "..-.",
	"G" : "--.",
	"H" : "....",
	"I" : "..",
	"J" : ".---",
	"K" : "-.-",
	"L" : ".-..",
	"M" : "--",
	"N" : "-.",
	"O" : "---",
	"P"	: ".--.",
	"Q"	: "--.-",
	"R"	: ".-.",
	"S" : "...",
	"T" : "-",
	"U" : "..-",
	"V" : "...-",
	"W" : ".--",
	"X" : "-..-",
	"Y" : "-.--",
	"Z" : "--..",
	"0" : "-----",
	"1" : ".----",
	"2" : "..---",
	"3" : "...--",
	"4" : "....--",
	"5" : ".....",
	"6" : "-....",
	"7" : "--...",
	"8" : "---..",
	"9" : "----.",
}


if len(sys.argv) == 1:
	sys.exit()
words = []
for i, word in enumerate(sys.argv[1:]):
	print(word.isalnum)
	if word.isalnum == False:
		sys.exit()
	if i < len(sys.argv) - 2:
		words += word.upper() + "\\"
	else:
		words += word.upper()
result = ""
for word in words:
	for letter in word:
		if letter == "\\":
			result += letter
		else:
			result += sos[letter] + " "
print(result[0:len(result)-1])