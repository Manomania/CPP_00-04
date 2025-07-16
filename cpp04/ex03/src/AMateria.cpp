#include "AMateria.hpp"


AMateria::AMateria(): _type("Empty") {
}

AMateria::AMateria(std::string const & type): _type(type) {
}

AMateria::~AMateria() {
}

std::string const& AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Nothing has been launched at " << target._name << std::endl;
}