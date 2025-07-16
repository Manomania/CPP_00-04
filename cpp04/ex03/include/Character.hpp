#pragma once

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string _name;
	AMateria*	_type[4];
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
	~Character();
// Public Methods
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};
