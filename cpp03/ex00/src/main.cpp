#include "ClapTrap.hpp"

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

	std::cout << "\n\033[4;31m===DESTRUCTORS===\033[0m\n" << std::endl;
}