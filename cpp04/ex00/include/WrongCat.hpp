#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
	// Constructor
		WrongCat();
		WrongCat(const std::string& name);
		WrongCat(const WrongCat& copy);
	// Overloaded Operator
		WrongCat& operator=(const WrongCat& copy);
	// Destructor
		~WrongCat();
	// Public Methods
		void	makeSound() const;
};
