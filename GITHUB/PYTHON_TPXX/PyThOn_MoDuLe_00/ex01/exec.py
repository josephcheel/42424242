#! /usr/bin/env python3

import sys

if len(sys.argv) == 1:
	sys.exit()
for i, arg in enumerate(reversed(sys.argv[1:])):
	swapped = arg.swapcase()
	if i < len(sys.argv) - 2:
		print(swapped[::-1], end=" ")	
	else:
		print(swapped[::-1], end="")