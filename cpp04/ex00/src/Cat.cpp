#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string& name): Animal(name) {
	std::cout << "Cat assignment constructor called" << std::endl;
}

Cat::Cat(const Cat& copy): Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy) {
	std::cout << "Cat overloaded operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}
void	Cat::makeSound() const {
	std::cout << "Cat make a sound : meow meow" << std::endl;
}
