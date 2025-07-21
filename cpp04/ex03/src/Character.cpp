#include "Character.hpp"

Character::Character(): _name("Default") {
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}

Character::Character(const std::string& name): _name(name) {
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}

Character::Character(const Character& copy): _name(copy._name) {
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	for (int i = 0; i < 4; i++) {
		if (copy._items[i] != NULL)
			this->_items[i] = copy._items[i]->clone();
	}
}

Character& Character::operator=(const Character& copy) {
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (this->_items[i] != NULL) {
			delete this->_items[i];
			this->_items[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (copy._items[i] != NULL)
			this->_items[i] = copy._items[i]->clone();
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_items[i] != NULL)
			delete this->_items[i];
	}
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->_items[i] == m) {
			std::cout << "This materia is already equipped" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (this->_items[i] == NULL) {
			this->_items[i] = m;
			std::cout << "Materia " << m->getType() << " has been equipped at position " << i << std::endl;
			return ;
		}
	}
	std::cout << "Error: Inventory is full" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4) {
		std::cout << "Error: Invalid slot" << std::endl;
		return ;
	}
	if (this->_items[idx] != NULL) {
		if (_indexFloor < 100) {
			_floor[_indexFloor] = this->_items[idx];
			std::cout << _floor[_indexFloor]->getType() << " has been dropped on the floor" << std::endl;
			_indexFloor++;
		} else {
			std::cout << "No place on the floor! Destroying " << this->_items[idx]->getType() << std::endl;
			delete this->_items[idx];
		}
		this->_items[idx] = NULL;
	} else
		std::cout << "This slot is empty" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 4 || idx < 0) {
		std::cout << "Error: Slot " << idx << " does not exist" << std::endl;
		return ;
	}
	if (this->_items[idx] != NULL) {
		this->_items[idx]->use(target);
	} else
		std::cout << "There is not item available" << std::endl;
}

void Character::cleanFloor() {
	for (int i = 0; i < _indexFloor; i++) {
		if (_floor[i] != NULL) {
			delete _floor[i];
			_floor[i] = NULL;
		}
	}
	std::cout << "Floor is cleaned up" << std::endl;
	_indexFloor = 0;
}

AMateria* Character::_floor[100];
int Character::_indexFloor = 0;