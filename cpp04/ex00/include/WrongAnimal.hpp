#pragma once
#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
	public:
	// Constructor
		WrongAnimal();
		WrongAnimal(const std::string& name);
		WrongAnimal(const WrongAnimal& copy);
	// Overloaded Operator
		WrongAnimal& operator=(const WrongAnimal& copy);
	// Destructor
		~WrongAnimal();
	// Getter
		std::string getType() const;
	// Public Methods
		void	makeSound() const;
};
