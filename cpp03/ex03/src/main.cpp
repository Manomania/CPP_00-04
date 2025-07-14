#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	std::cout << "\n\033[4;34m===CONSTRUCTOR DEFAULT FRAGTRAP===\033[0m\n" << std::endl;
	FragTrap FragTrap1;
	FragTrap1.attack("model_1");
	FragTrap1.takeDamage(200);
	FragTrap1.beRepaired(1);
	FragTrap1.highFivesGuys();

	std::cout << "\n\033[4;34m===CONSTRUCTOR ASSIGNMENT FRAGTRAP===\033[0m\n" << std::endl;
	FragTrap FragTrap2("FragTrap_Assignment");
	FragTrap2.attack("model_2");
	FragTrap2.takeDamage(9);
	FragTrap2.beRepaired(10);
	FragTrap2.highFivesGuys();

	std::cout << "\n\033[4;34m===CONSTRUCTOR COPY FRAGTRAP===\033[0m\n" << std::endl;
	FragTrap FragTrap3(FragTrap1);
	FragTrap3.attack("model_3");
	FragTrap3.takeDamage(9);
	FragTrap3.beRepaired(10);
	FragTrap3.highFivesGuys();

	std::cout << "\n\033[4;34m===OVERLOADED OPERATOR= FRAGTRAP===\033[0m\n" << std::endl;
	FragTrap FragTrap4("Temp");
	FragTrap4 = FragTrap1;
	FragTrap4.attack("model_4");
	FragTrap4.beRepaired(10);
	FragTrap4.highFivesGuys();

	std::cout << "\n\033[4;36m===CONSTRUCTOR DEFAULT DIAMONDTRAP===\033[0m\n" << std::endl;
	DiamondTrap DiamondTrap1;
	DiamondTrap1.attack("model_1");
	DiamondTrap1.takeDamage(200);
	DiamondTrap1.beRepaired(1);
	DiamondTrap1.guardGate();
	DiamondTrap1.highFivesGuys();
	DiamondTrap1.whoAmI();

	std::cout << "\n\033[4;36m===CONSTRUCTOR ASSIGNMENT DIAMONDTRAP===\033[0m\n" << std::endl;
	DiamondTrap DiamondTrap2("DiamondTrap_Assignment");
	DiamondTrap2.attack("model_2");
	DiamondTrap2.takeDamage(9);
	DiamondTrap2.beRepaired(10);
	DiamondTrap2.guardGate();
	DiamondTrap2.highFivesGuys();
	DiamondTrap2.whoAmI();

	std::cout << "\n\033[4;36m===CONSTRUCTOR COPY DIAMONDTRAP===\033[0m\n" << std::endl;
	DiamondTrap DiamondTrap3(DiamondTrap1);
	DiamondTrap3.attack("model_3");
	DiamondTrap3.takeDamage(9);
	DiamondTrap3.beRepaired(10);
	DiamondTrap3.guardGate();
	DiamondTrap3.highFivesGuys();
	DiamondTrap3.whoAmI();

	std::cout << "\n\033[4;36m===OVERLOADED OPERATOR= DIAMONDTRAP===\033[0m\n" << std::endl;
	DiamondTrap DiamondTrap4("Temp");
	DiamondTrap4 = DiamondTrap2;
	DiamondTrap4.attack("model_4");
	DiamondTrap4.beRepaired(10);
	DiamondTrap4.guardGate();
	DiamondTrap4.highFivesGuys();
	DiamondTrap4.whoAmI();

	std::cout << "\n\033[4;31m===DESTRUCTORS===\033[0m\n" << std::endl;
}
