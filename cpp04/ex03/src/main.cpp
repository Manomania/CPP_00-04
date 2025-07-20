#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	std::cout << "=== CONSTRUCTION IMATERIASOURCE ===" << std::endl;
	IMateriaSource* iMateriaSource1 = new MateriaSource();
	IMateriaSource* iMateriaSource2 = new MateriaSource();
	IMateriaSource* iMateriaSource3 = iMateriaSource1;

	std::cout << "=== CONSTRUCTION AMATERIA ===" << std::endl;
	AMateria* aMateria1;
	AMateria* aMateria2;
	AMateria* aMateria3;
	AMateria* aMateria4;

	std::cout << "=== CONSTRUCTION ICHARACTER ===" << std::endl;
	ICharacter* iCharacter1 = new Character("José");
	ICharacter* iCharacter2 = new Character("Albert");
	ICharacter* iCharacter3 = iCharacter1;

	std::cout << "=== TESTS ===" << std::endl;
	// TODO MORE TEST


	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	//
	// delete bob;
	// delete me;
	// delete src;
	return (0);
}