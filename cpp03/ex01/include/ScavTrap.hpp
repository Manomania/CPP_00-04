#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:
		bool	_guardGate;
	public:
	// Constructors
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
	// Destructor
		~ScavTrap();
	// Overloaded Operator
		ScavTrap& operator=(const ScavTrap& other);
	// Public Methods
		void	attack(const std::string& target);
		void	guardGate();
};
