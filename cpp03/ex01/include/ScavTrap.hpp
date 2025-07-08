#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
	public:
	// Constructors
		ScavTrap();
		ScavTrap(const std::string& name);
	// Destructor
		~ScavTrap();
	// Public Methods
		void	guardGate();
};
