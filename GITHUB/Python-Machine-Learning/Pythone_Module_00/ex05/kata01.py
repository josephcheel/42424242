#! /usr/bin/env python3

kata = {
	'Python': 'Guido van Rossum',
	'Ruby': 'Yukihiro Matsumoto',
	'PHP': 'Rasmus Lerdorf',
	}
print(f"{list(kata.keys())[0]} was created by {list(kata.values())[0]}")
print(f"{list(kata.keys())[1]} was created by {list(kata.values())[1]}")
print(f"{list(kata.keys())[2]} was created by {list(kata.values())[2]}")