#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, size_t grade): _name(name), _grade(grade) {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade) {

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	if (this == &copy)
		return (*this);
	this->_grade = copy._grade;
	return (*this);
}

const std::string& Bureaucrat::getName() const {
	return (this->_name);
}

size_t Bureaucrat::getGrade() const {
	return (this->_grade);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bc) {
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << std::endl;
	return (os);
}
