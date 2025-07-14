#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

void testPolymorphism() {
	std::cout << "\n\033[4;32m=== TEST POLYMORPHISM VALID ===\033[0m\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "GetTypes:" << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl;
	std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "\nSounds with polymorphism:" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\nDestruction:" << std::endl;
	delete meta;
	delete i;
	delete j;
}

void testWrongPolymorphism() {
	std::cout << "\n\033[4;33m=== TEST POLYMORPHISM INVALID ===\033[0m\n" << std::endl;
	const WrongAnimal* wrong1 = new WrongAnimal();
	const WrongAnimal* wrong2 = new WrongCat();
	const WrongAnimal* wrong3 = new WrongDog();
	std::cout << "GetTypes:" << std::endl;
	std::cout << "wrong1->getType(): " << wrong1->getType() << std::endl;
	std::cout << "wrong2->getType(): " << wrong2->getType() << std::endl;
	std::cout << "wrong3->getType(): " << wrong3->getType() << std::endl;
	std::cout << "\nSounds without polymorphism:" << std::endl;
	wrong1->makeSound();
	wrong2->makeSound();
	wrong3->makeSound();
	std::cout << "\nDestruction:" << std::endl;
	delete wrong1;
	delete wrong2;
	delete wrong3;
}

void testDirectObjects() {
	std::cout << "\n\033[4;36m=== TEST OBJECTS DIRECTS ===\033[0m\n" << std::endl;
	Cat directCat;
	Dog directDog;
	WrongCat directWrongCat;
	std::cout << "Sounds with direct objects:" << std::endl;
	directCat.makeSound();
	directDog.makeSound();
	directWrongCat.makeSound();
}

void testCopyAndAssignment() {
	std::cout << "\n\033[4;35m=== TEST COPY AND ASSIGNMENT ===\033[0m\n" << std::endl;
	Cat originalCat("Fluffy");
	Cat copiedCat(originalCat);
	std::cout << "\nAssignment test:" << std::endl;
	Dog dog1("Rex");
	Dog dog2;
	dog2 = dog1;
	std::cout << "\nTypes after copy/assignment:" << std::endl;
	std::cout << "copiedCat type: " << copiedCat.getType() << std::endl;
	std::cout << "dog2 type: " << dog2.getType() << std::endl;
}

int main() {
	std::cout << "\n\033[1;32m===== COMPLETE POLYMORPHISM C++ TESTS =====\033[0m" << std::endl;
	std::cout << "\n\033[4;32m=== ORIGINAL TEST ===\033[0m\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	testPolymorphism();
	testWrongPolymorphism();
	testDirectObjects();
	testCopyAndAssignment();
	std::cout << "\n\033[1;32m===== TESTS FINISHED =====\033[0m\n" << std::endl;
	return (0);
}