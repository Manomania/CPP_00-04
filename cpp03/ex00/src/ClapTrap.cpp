#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _nrgPoints(10), _atckDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): _name(other._name), _hitPoints(other._hitPoints), _nrgPoints(other._nrgPoints), _atckDamage(other._atckDamage) {
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoints(10), _nrgPoints(10), _atckDamage(0){
	std::cout << "Assignment constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Overload operator= called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_nrgPoints = copy._nrgPoints;
	this->_atckDamage = copy._atckDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_nrgPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atckDamage << " points of damage!" << std::endl;
		this->_nrgPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " cannot attack " << target << "..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " taken " << amount << " points of damage and died!" << std::endl;
		this->_hitPoints = 0;
	}
	else if (amount < this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " taken " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_nrgPoints > 0) {
		this->_hitPoints += amount;
		if (this->_hitPoints > 10) {
			this->_hitPoints = 10;
			std::cout << "ClapTrap " << this->_name << " repaired himself with " << amount <<" and reached the limit of 10 hit points!" << std::endl;
		}
		else {
			std::cout << "ClapTrap " << this->_name << " repaired himself and gain " << amount << " hit points!" << std::endl;
			this->_nrgPoints--;
		}
	}
	else
		std::cout << "ClapTrap " << this->_name << " cannot repair himself..." << std::endl;
}
