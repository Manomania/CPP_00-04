#include "Cure.hpp"

Cure::Cure() {
}

Cure::~Cure() {
}

AMateria* Cure::clone() const {
	return (new Cure);
}

void Cure::use(ICharacter& target) {

}