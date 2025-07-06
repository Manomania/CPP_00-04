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
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
	ClapTrap2.attack("other robot");
}
