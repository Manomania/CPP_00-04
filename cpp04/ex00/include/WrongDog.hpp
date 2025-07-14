#pragma once
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal {
	public:
	// Constructor
		WrongDog();
		WrongDog(const std::string& name);
		WrongDog(const WrongDog& copy);
	// Overloaded Operator
		WrongDog& operator=(const WrongDog& copy);
	// Destructor
		~WrongDog();
	// Public Methods
		void	makeSound() const;
};