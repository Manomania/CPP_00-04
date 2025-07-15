#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* _brain;
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
		Brain*			getBrain() const;
		virtual void	makeSound() const;
};