#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_name = "DiamondTrap";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHp = FragTrap::_maxHp;
	this->_nrgPoints = ScavTrap::_nrgPoints;
	this->_atckDamage = FragTrap::_atckDamage;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap assignment constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHp = FragTrap::_maxHp;
	this->_nrgPoints = ScavTrap::_nrgPoints;
	this->_atckDamage = FragTrap::_atckDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = other._name;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap Overload operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}