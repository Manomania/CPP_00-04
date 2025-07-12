#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = "FragTrap";
	_hitPoints = 100;
	_maxHp = 100;
	_nrgPoints = 100;
	_atckDamage = 30;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
	std::cout << "FragTrap assignment constructor called" << std::endl;
	_hitPoints = 100;
	_maxHp = 100;
	_nrgPoints = 100;
	_atckDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << "FragTrap Overload operator= called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_nrgPoints > 0) {
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_atckDamage << " points of damage!" << std::endl;
		this->_nrgPoints--;
	}
	else
		std::cout << "FragTrap " << this->_name << " cannot attack " << target << "..." << std::endl;
}

void	FragTrap:: highFivesGuys() {
	if (this->_hitPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " cannot high five " << std::endl;
	} else
		std::cout << "FragTrap " << this->_name << " high five everybody!!" << std::endl;
}

