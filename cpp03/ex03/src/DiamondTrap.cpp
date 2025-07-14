#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "DiamondTrap";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHp = FragTrap::_maxHp;
	this->_nrgPoints = ScavTrap::_nrgPoints;
	this->_atckDamage = FragTrap::_atckDamage;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap assignment constructor called" << std::endl;
	this->_name = name;
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
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_maxHp = copy._maxHp;
	this->_nrgPoints = copy._nrgPoints;
	this->_atckDamage = copy._atckDamage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << this->ClapTrap::_name << std::endl;
}