#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ClapTrap ClapTrap4 = ClapTrap1;
	ClapTrap4.attack("model_4");
	ClapTrap4.beRepaired(10);

	std::cout << "\n===CONSTRUCTOR DEFAULT SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap1;
	ScavTrap1.attack("model_1");
	ScavTrap1.takeDamage(200);
	ScavTrap1.beRepaired(1);

	std::cout << "\n===CONSTRUCTOR ASSIGNMENT SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap2("ScavTrap_Assignment");
	ScavTrap2.attack("model_2");
	ScavTrap2.takeDamage(9);
	ScavTrap2.beRepaired(10);

	std::cout << "\n===CONSTRUCTOR COPY SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap3(ScavTrap1);
	ScavTrap3.attack("model_3");
	ScavTrap3.takeDamage(9);
	ScavTrap3.beRepaired(10);

	std::cout << "\n===OVERLOADED OPERATOR= SCAVTRAP===\n" << std::endl;
	ScavTrap ScavTrap4 = ScavTrap1;
	ScavTrap4.attack("model_4");
	ScavTrap4.beRepaired(10);

	std::cout << "\n===DESTRUCTORS===\n" << std::endl;
}
