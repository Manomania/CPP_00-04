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
	return (*this);
}

Character::~Character() {
}