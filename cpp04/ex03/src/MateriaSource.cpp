#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;

}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	for (int i = 0; i < 4; i++) {
		if (copy._materias[i] != NULL)
			this->_materias[i] = copy._materias[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (copy._materias[i] != NULL)
			this->_materias[i] = copy._materias[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] == NULL) {
			this->_materias[i] = m->clone();
			delete m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (NULL);
}