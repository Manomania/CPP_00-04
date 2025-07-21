#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"
#define BOLD       "\033[1m"
#define RESET	"\033[0m"


int main()
{
	IMateriaSource* iMateriaSource1 = new MateriaSource();
	IMateriaSource* iMateriaSource2 = new MateriaSource();
	IMateriaSource* iMateriaSource3 = new MateriaSource();
	AMateria* aMateria1;
	AMateria* aMateria2;
	AMateria* aMateria3;
	ICharacter* iCharacter1 = new Character("José");
	ICharacter* iCharacter2 = new Character("Albert");

	std::cout << GREEN BOLD"=== TESTS ==="RESET << std::endl;
	iMateriaSource1->learnMateria(new Ice());
	iMateriaSource1->learnMateria(new Cure());
	iMateriaSource2->learnMateria(new Ice());
	iMateriaSource2->learnMateria(new Cure());
	iMateriaSource3->learnMateria(new Ice());
	std::cout << std::endl;
	aMateria1 = iMateriaSource1->createMateria("ice");
	iCharacter1->equip(aMateria1);
	iCharacter1->equip(aMateria1);
	aMateria1 = iMateriaSource1->createMateria("cure");
	iCharacter1->equip(aMateria1);
	aMateria1 = iMateriaSource1->createMateria("fire");
	iCharacter1->equip(aMateria1);
	aMateria1 = iMateriaSource1->createMateria("wind");
	iCharacter1->equip(aMateria1);
	aMateria1 = iMateriaSource1->createMateria("earth");
	iCharacter1->equip(aMateria1);
	aMateria2 = iMateriaSource2->createMateria("ice");
	iCharacter2->equip(aMateria2);
	aMateria2 = iMateriaSource2->createMateria("cure");
	iCharacter2->equip(aMateria2);
	aMateria2 = iMateriaSource2->createMateria("fire");
	iCharacter2->equip(aMateria2);
	aMateria2 = iMateriaSource2->createMateria("wind");
	iCharacter2->equip(aMateria2);
	aMateria3 = iMateriaSource3->createMateria("ice");
	iCharacter1->equip(aMateria3);
	std::cout << std::endl;
	iCharacter1->use(0, *iCharacter2);
	iCharacter1->unequip(0);
	iCharacter1->use(0, *iCharacter2);
	iCharacter1->use(0, *iCharacter2);
	iCharacter1->use(1, *iCharacter2);
	iCharacter1->use(2, *iCharacter2);
	iCharacter1->use(3, *iCharacter2);
	iCharacter1->use(4, *iCharacter2);
	std::cout << std::endl;
	iCharacter2->use(0, *iCharacter2);
	iCharacter2->use(1, *iCharacter2);
	iCharacter2->use(2, *iCharacter2);
	iCharacter2->use(3, *iCharacter2);
	iCharacter2->use(4, *iCharacter2);
	std::cout << RED BOLD"=== TESTS FINISHED ==="RESET << std::endl;
	Character::cleanFloor();
	delete iMateriaSource1;
	delete iMateriaSource2;
	delete iMateriaSource3;
	delete iCharacter1;
	delete iCharacter2;
	return (0);
}