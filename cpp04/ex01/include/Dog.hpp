#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain* _brain;
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
		Brain*			getBrain() const;
		virtual void	makeSound() const;
};