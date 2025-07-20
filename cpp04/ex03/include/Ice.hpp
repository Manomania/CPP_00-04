#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria {
private:
public:
	Ice();
	virtual ~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
