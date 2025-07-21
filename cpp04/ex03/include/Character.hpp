#pragma once

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string			_name;
	AMateria*			_items[4];
	static AMateria*	_floor[100];
	static int			_indexFloor;
public:
// Constructor
	Character();
// Assignment constructor
	Character(const std::string& name);
// Copy constructor
	Character(const Character& copy);
// Overloaded operator
	Character& operator=(const Character& copy);
// Destructor
	virtual ~Character();
// Public Methods
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	static void	cleanFloor();
};
