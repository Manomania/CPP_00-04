#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	std::cout << "\n===CONSTRUCTOR DEFAULT CLAPTRAP===\n" << std::endl;
	ClapTrap ClapTrap1;
	ClapTrap1.attack("model_1");
	ClapTrap1.takeDamage(200);
	ClapTrap1.beRepaired(1);

	std::cout << "\n===CONSTRUCTOR ASSIGNMENT CLAPTRAP===\n" << std::endl;
	ClapTrap ClapTrap2("ClapTrap_Assignment");
	ClapTrap2.attack("model_2");
	ClapTrap2.takeDamage(9);
	ClapTrap2.beRepaired(10);

	std::cout << "\n===CONSTRUCTOR COPY CLAPTRAP===\n" << std::endl;
	ClapTrap ClapTrap3(ClapTrap1);
	ClapTrap3.attack("model_3");
	ClapTrap3.takeDamage(9);
	ClapTrap3.beRepaired(10);

	std::cout << "\n===OVERLOADED OPERATOR= CLAPTRAP===\n" << std::endl;
	ClapTrap ClapTrap4("Temp");
	ClapTrap4 = ClapTrap1;
	ClapTrap4.attack("model_4");
	ClapTrap4.beRepaired(10);

	std::cout << "\n===CONSTRUCTOR DEFAULT SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap1;
	ScavTrap1.attack("model_1");
	ScavTrap1.takeDamage(200);
	ScavTrap1.beRepaired(1);
	ScavTrap1.guardGate();

	std::cout << "\n===CONSTRUCTOR ASSIGNMENT SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap2("ScavTrap_Assignment");
	ScavTrap2.attack("model_2");
	ScavTrap2.takeDamage(9);
	ScavTrap2.beRepaired(10);
	ScavTrap2.guardGate();

	std::cout << "\n===CONSTRUCTOR COPY SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap3(ScavTrap1);
	ScavTrap3.attack("model_3");
	ScavTrap3.takeDamage(9);
	ScavTrap3.beRepaired(10);
	ScavTrap3.guardGate();

	std::cout << "\n===OVERLOADED OPERATOR= SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap4("Temp");
	ScavTrap4 = ScavTrap1;
	ScavTrap4.attack("model_4");
	ScavTrap4.beRepaired(10);
	ScavTrap4.guardGate();

	std::cout << "\n===DESTRUCTORS===\n" << std::endl;
	FragTrap1.attack("robot");
	FragTrap1.takeDamage(1000);
	FragTrap1.beRepaired(10);
	FragTrap1.attack("robot");
	FragTrap2.takeDamage(10);
	FragTrap2.beRepaired(11);
	FragTrap2.highFivesGuys();
	for (int i = 0; i < 11; i++)
		FragTrap2.attack("other robot");
	DiamondTrap1.attack("robot");
	DiamondTrap1.takeDamage(1000);
	DiamondTrap1.beRepaired(10);
	DiamondTrap1.attack("robot");
	DiamondTrap1.highFivesGuys();
	DiamondTrap1.whoAmI();
	DiamondTrap1.guardGate();
	DiamondTrap2.takeDamage(10);
	DiamondTrap2.beRepaired(11);
	DiamondTrap2.highFivesGuys();
	DiamondTrap2.whoAmI();
	DiamondTrap2.guardGate();
	for (int i = 0; i < 11; i++)
		DiamondTrap2.attack("other robot");
}
