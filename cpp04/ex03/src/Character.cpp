#include "Character.hpp"

Character::Character() {
	_name = "Default";
}

Character::Character(const std::string& name): _name(name) {
}

Character::Character(const Character& copy): _name(copy._name){
}

Character& Character::operator=(const Character& copy) {
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	return (*this);
}

Character::~Character() {
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter& target) {

}