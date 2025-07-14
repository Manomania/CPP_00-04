#pragma once
#include "Animal.hpp"

class Dog: public Animal {
	public:
	// Constructor
		Dog();
		Dog(const std::string& name);
		Dog(const Dog& copy);
	// Overloaded Operator
		Dog& operator=(const Dog& copy);
	// Destructor
		virtual ~Dog();
	// Public Methods
		virtual void	makeSound() const;
};