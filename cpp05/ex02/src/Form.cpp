#include "Form.hpp"

Form::Form(): _name("default"), _isItSigned("false"), _signGrade(150), _constGrade(150) {

}

Form::Form(const std::string& name, size_t signGrade, size_t constGrade): _name(name), _isItSigned(false), _signGrade(signGrade), _constGrade(constGrade) {
	if (signGrade > 150 || constGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || constGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& copy): _name(copy._name), _isItSigned(copy._isItSigned), _signGrade(copy._signGrade), _constGrade(copy._constGrade) {

}

Form::~Form() {

}

Form& Form::operator=(const Form& other) {
	if (this == &other)
		return (*this);
	this->_isItSigned = other._isItSigned;
	return (*this);
}

const std::string& Form::getName() const {
	return (this->_name);
}

bool Form::getIsItSigned() const {
	return (this->_isItSigned);
}

size_t Form::getSignGrade() const {
	return (this->_signGrade);
}

size_t Form::getConstGrade() const {
	return (this->_constGrade);
}

void Form::beSigned(const Bureaucrat& bc) {
	if (bc.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else if (this->_isItSigned == true)
		std::cout << bc.getName() << " wont sign the form " << this->getName() << " because it is already signed" << std::endl;
	else {
		this->_isItSigned = true;
		std::cout << bc.getName() << " has signed the form " << this->getName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& fm) {
	os << "Form : " << fm.getName() << "\n";
	os << "Is it signed: " << fm.getIsItSigned() << "\n";
	os << "Grade needed to be signed: " << fm.getSignGrade() << "\n";
	os << "Grade needed to be executed: " << fm.getConstGrade() << std::endl;;
	return (os);
}