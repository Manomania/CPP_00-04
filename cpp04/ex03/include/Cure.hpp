#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria {
private:
public:
	virtual AMateria* clone() const;
};
