#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	int size = 10;
	std::cout << "\n\033[1;32m===== ANIMALS (CAT & DOG) CONSTRUCTION =====\033[0m\n" << std::endl;
	Animal* animals[size];
	for (int i = 0; i < size; i++) {
		if (i < size / 2) {
			if (i % 2 == 1)
				animals[i] = new Dog();
			else
				animals[i] = new Dog("Théo the dog");
		}
		else if (i >= size / 2) {
			if (i % 2 == 1)
				animals[i] = new Cat();
			else
				animals[i] = new Cat("Erwann the cat");
		}
	}
	animals[4]->makeSound();
	std::cout << "\n\033[1;34m===== CONSTRUCTION CAT =====\033[0m\n" << std::endl;
	Cat Cat1("Kaan");
	Cat Cat2 = Cat1;
	Cat Cat3("Fab");
	Cat Cat4 = Cat3;
	std::cout << "\n\033[1;34m===== TEST CAT =====\033[0m\n" << std::endl;
	std::cout << Cat1.getBrain() << " vs " << Cat2.getBrain() << std::endl;
	std::cout << Cat3.getBrain() << " vs " << Cat4.getBrain() << std::endl;
	Cat3.makeSound();
	Cat4.makeSound();
	for (int k = 0; k < size; k++)
		std::cout << animals[k]->getType() << " " << std::endl;
	std::cout << "\n\033[1;33m===== CONSTRUCTION DOG =====\033[0m\n" << std::endl;
	Dog Dog1("Enzo");
	Dog Dog2 = Dog1;
	Dog Dog3("Allan");
	Dog Dog4 = Dog3;
	std::cout << "\n\033[1;33m===== TEST DOG =====\033[0m\n" << std::endl;
	std::cout << Dog1.getBrain() << " vs " << Dog2.getBrain() << std::endl;
	std::cout << Dog3.getBrain() << " vs " << Dog4.getBrain() << std::endl;
	Dog3.makeSound();
	Dog4.makeSound();
	for (int k = 0; k < size; k++)
		std::cout << animals[k]->getType() << " " << std::endl;
	std::cout << "\n\033[1;31m===== DESTRUCTION =====\033[0m\n" << std::endl;
	for (int j = 0; j < size; j++)
		delete animals[j];
	return (0);
}