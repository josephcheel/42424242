#! /usr/bin/env python3

import sys

try:
	assert len(sys.argv) >= 2, "no argument argument provided"
	assert len(sys.argv) <= 2, "more than one argument provided"
	assert sys.argv[1].isdigit(), "argument is not an integer"
except AssertionError as error:
	print(f"{error}")
	sys.exit()
else:
	nbr = int(sys.argv[1])
	if nbr == 0:
		print("I'm Zero.")
	elif nbr % 2 == 0:
		print("I'm Even.")
	else:
		print("I'm Odd.")