#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
	// Constructors
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& other);
	// Destructor
		~DiamondTrap();
	// Overloaded Operator
		DiamondTrap& operator=(const DiamondTrap& other);
	// Public Methods
		using	ScavTrap::attack;
		void	whoAmI();
};
