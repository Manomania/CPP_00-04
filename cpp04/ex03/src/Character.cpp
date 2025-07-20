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
			std::cout << "Materia " << m << " has been equipped at position " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx) {
	if (this->_items[idx] != NULL) {
		std::cout << this->_items[idx]->getType() << " has been unequiped." << std::endl;
		this->_items[idx] = NULL;
	} else
		std::cout << "Inventory is empty" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (this->_items[idx] != NULL) {
		this->_items[idx]->use(target);
	} else
		std::cout << "There is not item available" << std::endl;
}