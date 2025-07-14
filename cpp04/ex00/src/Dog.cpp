#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& name): Animal(name) {
	std::cout << "Dog assignment constructor called" << std::endl;
}

Dog::Dog(const Dog& copy): Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
	std::cout << "Dog overloaded operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}
void	Dog::makeSound() const {
	std::cout << "Dog make a sound : woof woof" << std::endl;
}