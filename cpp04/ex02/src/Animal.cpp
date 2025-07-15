#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& name): _type(name) {
	std::cout << "Animal assignment constructor called" << std::endl;
}

Animal::Animal(const Animal& copy): _type(copy._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy) {
	std::cout << "Animal overloaded operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}