#! /usr/bin/env python3

import time
import datetime
class Book:
	def __init__(self, name, recipes_list):
		self.name = name
		self.last_update = datetime.datetime.now()
		self.creation_date = f"{datetime.date.today().month}{datetime.date.today().day}"
		self.recipes_list = recipes_list
	def __str__(self):
		"""Return the string to print with the recipe info"""
		formatted_datetime = self.last_update.strftime("%d/%m/%Y %H:%M:%S")
		txt = f"Name:\t\t{self.name}\nLast Update:\t{formatted_datetime}"
		"""Your code here"""
		return txt