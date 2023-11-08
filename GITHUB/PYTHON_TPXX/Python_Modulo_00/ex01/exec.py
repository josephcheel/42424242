#!/usr/bin/env python3

import sys

if len(sys.argv) < 2:
    sys.exit()
string = ""
for arg in sys.argv[1:]:
    string += arg
print(string.swapcase()[::-1])
