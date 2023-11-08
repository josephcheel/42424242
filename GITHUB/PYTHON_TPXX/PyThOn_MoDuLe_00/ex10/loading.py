#! /usr/bin/env python3

import time

def ft_progress(lst):
	max = len(lst)
	while max > 0:
		yield max 
		max -= 1

def	ft_bar(num, max):
	section =  max / 10
	for i in range(20):
		if num == max:
			return 20
		elif num < section * i:
			return i
	return 20
		

def ft_spaces(num, max):
	section = max / 10
	for i in range(20):
		if num == max:
			return 0
		elif num < section * i:
			return 20-i
	return 0

listy = range(500)
lenght = len(listy)
ret = 0
start_time = time.time()
for elem in ft_progress(listy):
	ret += (elem+3) % 5
	time.sleep(0.01)
	text = "[{}{}{}]".format("=" * (ft_bar(ret, lenght) - 1), ">" , " " * ft_spaces(ret, lenght))
	end_time = time.time()
	percentage = (lenght-elem)/(lenght/100)
	if 	percentage != 0:
		estimated_time = (100*(end_time - start_time))/percentage
	else:
		estimated_time = 0
	print(f"EAT: {estimated_time:.2f}s [{percentage:3.0f}%]{text} {lenght-elem}/{lenght} | Elapsed Time: {end_time - start_time:.02f}s", end="\r")
	