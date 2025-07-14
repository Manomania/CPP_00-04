#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("WrongDog") {
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(const std::string& name): WrongAnimal(name) {
	std::cout << "WrongDog assignment constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& copy): WrongAnimal(copy) {
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog& WrongDog::operator=(const WrongDog& copy) {
	std::cout << "WrongDog overloaded operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	WrongAnimal::operator=(copy);
	return (*this);
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}
void	WrongDog::makeSound() const {
	std::cout << "WrongDog make a sound : Couac Couac" << std::endl;
}
