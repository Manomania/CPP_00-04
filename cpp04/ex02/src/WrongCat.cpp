#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& name): WrongAnimal(name) {
	std::cout << "WrongCat assignment constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	std::cout << "WrongCat overloaded operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	WrongAnimal::operator=(copy);
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}
void	WrongCat::makeSound() const {
	std::cout << "WrongCat make a sound : Cruic cruic" << std::endl;
}
