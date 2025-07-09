#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap ClapTrap1("Zebi");
	ClapTrap ClapTrap2;
	ScavTrap ScavTrap1("Senior");
	ScavTrap ScavTrap2;

	ClapTrap1.attack("robot");
	ClapTrap1.takeDamage(10);
	ClapTrap1.beRepaired(10);
	ClapTrap1.attack("robot");
	ClapTrap2.takeDamage(9);
	ClapTrap2.beRepaired(11);
	for (int i = 0; i < 11; i++)
		ClapTrap2.attack("other robot");
	ScavTrap1.attack("robot");
	ScavTrap1.takeDamage(1000);
	ScavTrap1.beRepaired(10);
	ScavTrap1.attack("robot");
	ScavTrap2.takeDamage(10);
	ScavTrap2.beRepaired(11);
	ScavTrap2.guardGate();
	for (int i = 0; i < 11; i++)
		ScavTrap2.attack("other robot");
}
