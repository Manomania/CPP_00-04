#pragma once
#include "Animal.hpp"

class Cat: public Animal {
	public:
	// Constructor
		Cat();
		Cat(const std::string& name);
		Cat(const Cat& copy);
	// Overloaded Operator
		Cat& operator=(const Cat& copy);
	// Destructor
		virtual ~Cat();
	// Public Methods
		virtual void	makeSound() const;
};