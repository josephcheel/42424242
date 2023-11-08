#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << std::endl;
	// Declaration Animal Dog and Cat classed
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	// Get type member function for three classes
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl;
	// Make sound member function for three classes
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
    meta->makeSound();
	
	std::cout << std::endl;
   	// delete objects
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	// Declaration of WrongAnimal and WrongCat
	const WrongAnimal*	meta1 = new WrongAnimal();
	const WrongAnimal*	i1 = new WrongCat();

	std::cout << std::endl;
	// get type function
	std::cout << i1->getType() << std::endl;
	std::cout << meta1->getType() << std::endl;

	std::cout << std::endl;	
	// WrongAnimal and WrongCat sound 
	i1->makeSound(); //will output the WrongAnimal sound!
	meta1->makeSound();

	std::cout << std::endl;
	// Delete Objects
	delete i1;
	delete meta1;

	return 0;
}