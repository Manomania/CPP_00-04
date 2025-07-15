#pragma once
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat: public WrongAnimal {
	private:
		Brain* _brain;
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
