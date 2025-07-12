#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:
	public:
		// Constructors
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		// Destructor
		~FragTrap();
		// Overloaded Operator
		FragTrap& operator=(const FragTrap& other);
		// Public Methods
		void	attack(const std::string& target);
		void	highFivesGuys();
};
