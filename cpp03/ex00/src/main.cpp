#include "ClapTrap.hpp"

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

	std::cout << "\n===DESTRUCTORS CLAPTRAP===\n" << std::endl;
}
