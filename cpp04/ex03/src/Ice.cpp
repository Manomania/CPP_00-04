#include "Ice.hpp"

Ice::Ice() {
}

Ice::~Ice() {
}

AMateria* Ice::clone() const {
	return (new Ice);
}

void Ice::use(ICharacter& target) {

}