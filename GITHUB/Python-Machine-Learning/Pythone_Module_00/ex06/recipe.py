#! /usr/bin/env python3

import sys
import time 

cookbook = {
	"bocadillo" : {
			"ingredients"	: ["jamón", "pan", "queso", "tomate"],
			"meal"			: "almuerzo",
			"prep_time"		: 10
	},
	"tarta" : {
			"ingredients"	: ["harina", "azúcar", "huevos"],
			"meal"			: "postre",
			"prep_time"		: 60
	},
	"ensalada" : {
			"ingredients"	: ["aguacate", "rúcula", "tomates", "espinacas"],
			"meal"			: "almuerzo",
			"prep_time"		: 15
	},
}

def	print_recipe_name():
	print(f"{list(cookbook.keys())[0]}, {list(cookbook.keys())[1]}, {list(cookbook.keys())[2]}")

def	print_recipe_detail(name):
	recipe = cookbook.get(name)
	for key, value, in recipe.items():
		print(f"{key}:\t\t{value}")

def delete_recipe_key(name):
	del cookbook[name]

def	add_recipe_detail():
	ingredients = []
	name = input("Enter a name:\n")
	ingredient = input("Enter a ingredients:\n")
	ingredients.append(ingredient)
	while ingredient != "":
		ingredient = input()
		if not ingredient == "":
			ingredients.append(ingredient)
	meal = input("Enter a meal type:\n")
	prep_time = input("Enter a preparation time:\n")	
	cookbook.update({name : {
		"ingredients"	: ingredients,
		"meal"			: meal,
		"prep_time"		: prep_time
		}
	})

print("Welcome to the Python Cookbook !")
print("List of available option:")

while  1:
	
	print("  1: Add a recipe")
	print("  2: Delete a recipe")
	print("  3: Print a recipe")
	print("  4: Print the cookbook")
	print("  5: Quit\n")
	option = int(input("Please select an option:\n"))
	if option == 1:
		add_recipe_detail()
	elif option == 2:
		name = input("Please enter a recipe name to delete:\n")
		if name not in cookbook:
			print("Sorry, this option does not exist.")
		else:
			delete_recipe_key(name)
	elif option == 3:
		name = input("Please enter a recipe name to get its details:\n")
		if name not in cookbook:
			print("Sorry, this option does not exist.")
		else:
			print(f"\nRecipe for {name}:")
			print(f"  Ingredients list:\t{cookbook[name]['ingredients']}")
			print(f"  To be eaten for {cookbook[name]['meal']}")
			print(f"  Takes {cookbook[name]['prep_time']} minutes of cooking.\n")
	elif option == 4:
		for key, value in cookbook.items():
			print(f"{key}")
			print(f"  Ingredients list:\t{value['ingredients']}")
			print(f"  To be eaten for {value['meal']}")
			print(f"  Takes {value['prep_time']} minutes of cooking.\n")
	elif option == 5:
		print("Cookbook closed. Goodbye !")
		sys.exit()
	time.sleep(1)
