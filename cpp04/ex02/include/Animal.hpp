#pragma once
#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
	// Constructor
		Animal();
		Animal(const std::string& name);
		Animal(const Animal& copy);
	// Overloaded Operator
		Animal& operator=(const Animal& copy);
	// Destructor
		virtual ~Animal();
	// Getter
		std::string getType() const;
	// Public Methods
		virtual void	makeSound() const = 0;
};
