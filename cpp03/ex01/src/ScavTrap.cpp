#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	_name = "ScavTrap";
	_hitPoints = 100;
	_nrgPoints = 50;
	_atckDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
	_name = name;
	std::cout << "ScavTrap assignment constructor called" << std::endl;
}

void	guardGate() {

}