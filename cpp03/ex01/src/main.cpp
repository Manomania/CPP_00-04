#include "ClapTrap.hpp"

int main() {
	ClapTrap ClapTrap1("Zebi");
	ClapTrap ClapTrap2;

	ClapTrap1.attack("robot");
	ClapTrap1.takeDamage(10);
	ClapTrap1.beRepaired(10);
	ClapTrap1.attack("robot");
	ClapTrap2.takeDamage(9);
	ClapTrap2.beRepaired(11);
	for (int i = 0; i < 11; i++)
		ClapTrap2.attack("other robot");
}
