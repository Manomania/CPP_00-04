#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_maxHp = 100;
	this->_nrgPoints = 50;
	this->_atckDamage = 20;
	this->_guardGate = false;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
	std::cout << "ScavTrap assignment constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_maxHp = 100;
	this->_nrgPoints = 50;
	this->_atckDamage = 20;
	this->_guardGate = false;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_guardGate = other._guardGate;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap Overload operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	ClapTrap::operator=(copy);
	this->_guardGate = copy._guardGate;
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_nrgPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atckDamage << " points of damage!" << std::endl;
		this->_nrgPoints--;
	} else
		std::cout << "ScavTrap " << this->_name << " cannot attack " << target << "..." << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_hitPoints > 0) {
		if (_guardGate == false) {
			_guardGate = true;
			std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
		} else
			std::cout << "ScavTrap " << this->_name << " is already in Gate keeper mode" << std::endl;
	} else
		std::cout << "ScavTrap " << this->_name << " cannot be in Gate keeper mode cuz he's dead" << std::endl;
}
