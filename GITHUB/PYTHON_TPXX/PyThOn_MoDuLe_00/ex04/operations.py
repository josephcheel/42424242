#! /usr/bin/env python3

import sys


try:
	assert len(sys.argv) <= 3, "too many arguments"
	assert len(sys.argv) == 3, "Usage: python operations.py <number1> <number2>\nExample:\n\tpython operations.py 10 3"
	assert sys.argv[1].isdigit() and sys.argv[2].isdigit(), "must be whole numbers"
except AssertionError as error:
	print(f"{error}")
	sys.exit()
else:
	A = int(sys.argv[1])
	B = int(sys.argv[2])
	print(f"sum:\t\t{A + B}")
	print(f"Difference:\t{A - B}")
	print(f"Product:\t{A * B}")
	if A == 0 or B == 0:
		print(f"Quotient:\tERROR (division by zero)")
		print("Remainder:\tERROR (modulo by zero)")
	else:
		print(f"Quotient:\t{A / B}")
		print(f"Remainder:\t{A % B}")
