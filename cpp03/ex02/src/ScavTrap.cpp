#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "ScavTrap";
	_hitPoints = 100;
	_maxHp = 100;
	_nrgPoints = 50;
	_atckDamage = 20;
	_guardGate = false;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
	std::cout << "ScavTrap assignment constructor called" << std::endl;
	_hitPoints = 100;
	_maxHp = 100;
	_nrgPoints = 50;
	_atckDamage = 20;
	_guardGate = false;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap Overload operator= called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_maxHp = copy._maxHp;
	this->_nrgPoints = copy._nrgPoints;
	this->_atckDamage = copy._atckDamage;
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
			std::cout << "ScavTrap " << " is already in Gate keeper mode" << std::endl;
	} else
		std::cout << "ScavTrap " << " cannot be in Gate keeper mode cuz he's dead" << std::endl;
}
