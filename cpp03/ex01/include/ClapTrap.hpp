#pragma once
#include <iostream>

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_nrgPoints;
		unsigned int	_atckDamage;
	public:
	// Constructors
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap(const std::string& name);
	//Destructor
		~ClapTrap();
	// Overloaded Operators
		ClapTrap& operator=(const ClapTrap& copy);
	// Public Methods
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
