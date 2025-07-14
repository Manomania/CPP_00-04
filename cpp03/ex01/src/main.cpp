#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "\n\033[4;32m===CONSTRUCTOR DEFAULT CLAPTRAP===\033[0m\n" << std::endl;
	ClapTrap ClapTrap1;
	ClapTrap1.attack("model_1");
	ClapTrap1.takeDamage(200);
	ClapTrap1.beRepaired(1);

	std::cout << "\n\033[4;32m===CONSTRUCTOR ASSIGNMENT CLAPTRAP===\033[0m\n" << std::endl;
	ClapTrap ClapTrap2("ClapTrap_Assignment");
	ClapTrap2.attack("model_2");
	ClapTrap2.takeDamage(9);
	ClapTrap2.beRepaired(10);

	std::cout << "\n\033[4;32m===CONSTRUCTOR COPY CLAPTRAP===\033[0m\n" << std::endl;
	ClapTrap ClapTrap3(ClapTrap1);
	ClapTrap3.attack("model_3");
	ClapTrap3.takeDamage(9);
	ClapTrap3.beRepaired(10);

	std::cout << "\n\033[4;32m===OVERLOADED OPERATOR= CLAPTRAP===\033[0m\n" << std::endl;
	ClapTrap ClapTrap4("Temp");
	ClapTrap4 = ClapTrap1;
	ClapTrap4.attack("model_4");
	ClapTrap4.beRepaired(10);

	std::cout << "\n\033[4;33m===CONSTRUCTOR DEFAULT SCAVTRAP===\033[0m\n" << std::endl;
	ScavTrap ScavTrap1;
	ScavTrap1.attack("model_1");
	ScavTrap1.takeDamage(200);
	ScavTrap1.beRepaired(1);
	ScavTrap1.guardGate();

	std::cout << "\n\033[4;33m===CONSTRUCTOR ASSIGNMENT SCAVTRAP===\033[0m\n" << std::endl;
	ScavTrap ScavTrap2("ScavTrap_Assignment");
	ScavTrap2.attack("model_2");
	ScavTrap2.takeDamage(9);
	ScavTrap2.beRepaired(10);
	ScavTrap2.guardGate();

	std::cout << "\n\033[4;33m===CONSTRUCTOR COPY SCAVTRAP===\033[0m\n" << std::endl;
	ScavTrap ScavTrap3(ScavTrap1);
	ScavTrap3.attack("model_3");
	ScavTrap3.takeDamage(9);
	ScavTrap3.beRepaired(10);
	ScavTrap3.guardGate();

	std::cout << "\n\033[4;33m===OVERLOADED OPERATOR= SCAVTRAP===\033[0m\n" << std::endl;
	ScavTrap ScavTrap4("Temp");
	ScavTrap4 = ScavTrap1;
	ScavTrap4.attack("model_4");
	ScavTrap4.beRepaired(10);
	ScavTrap4.guardGate();

	std::cout << "\n\033[4;31m===DESTRUCTORS===\033[0m\n" << std::endl;
}