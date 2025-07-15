#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const std::string& name): Animal(name) {
	std::cout << "Dog assignment constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& copy): Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
}

Dog& Dog::operator=(const Dog& copy) {
	std::cout << "Dog overloaded operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Brain*	Dog::getBrain() const {
	return (_brain);
}

void	Dog::makeSound() const {
	std::cout << "Dog make a sound : woof woof" << std::endl;
}