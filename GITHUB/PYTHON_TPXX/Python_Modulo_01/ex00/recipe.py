#! /usr/bin/env python3

class Recipe:
    def __init__(self, name, level, time, ingredients, description, recipe_type):
        self.name = name
        self.level = level
        self.time = time
        self.ingredients = ingredients
        self.description = description
        self.recipe_type = recipe_type

def __str__(self):
    txt = f"{self.name} ({self.recipe_type}): {self.description}\nDificultad: {self.level} | Tiempo: {self.time} min\nIngredientes: {', '.join(self.ingredients)}\n"
    return txt

tourte = Recipe(...) 
to_print = str(tourte) 
print(to_print)