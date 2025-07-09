#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
	_name = "ScavTrap";
	_hitPoints = 100;
	_nrgPoints = 50;
	_atckDamage = 20;
	_guardGate = false;
}

ScavTrap::ScavTrap(const std::string& name) {
	std::cout << "ScavTrap assignment constructor called" << std::endl;
	_name = name;
	_hitPoints = 100;
	_nrgPoints = 50;
	_atckDamage = 20;
	_guardGate = false;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_nrgPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atckDamage << " points of damage!" << std::endl;
		this->_nrgPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " cannot attack " << target << "..." << std::endl;
}

void	ScavTrap::guardGate() {
	if (_guardGate == false) {
		_guardGate = true;
		std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << this->_name << " is already in Gate keeper mode" << std::endl;
}