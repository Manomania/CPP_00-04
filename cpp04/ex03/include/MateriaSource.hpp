#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria* _materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	MateriaSource& operator=(const MateriaSource& copy);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};
