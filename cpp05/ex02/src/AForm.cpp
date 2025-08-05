#include "AForm.hpp"

AForm::AForm(): _name("default"), _isItSigned(false), _signGrade(150), _constGrade(150), _target("default") {

}

AForm::AForm(const std::string& name, size_t signGrade, size_t constGrade): _name(name), _isItSigned(false), _signGrade(signGrade), _constGrade(constGrade) {
	if (signGrade > 150 || constGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || constGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const std::string& name, size_t signGrade, size_t constGrade, const std::string& target): _name(name), _isItSigned(false), _signGrade(signGrade), _constGrade(constGrade), _target(target) {
	if (signGrade > 150 || constGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || constGrade < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& copy): _name(copy._name), _isItSigned(copy._isItSigned), _signGrade(copy._signGrade), _constGrade(copy._constGrade), _target(copy._target) {

}

AForm::~AForm() {

}

AForm& AForm::operator=(const AForm& other) {
	if (this == &other)
		return (*this);
	this->_isItSigned = other._isItSigned;
	return (*this);
}

const std::string& AForm::getName() const {
	return (this->_name);
}

bool AForm::getIsItSigned() const {
	return (this->_isItSigned);
}

size_t AForm::getSignGrade() const {
	return (this->_signGrade);
}

size_t AForm::getConstGrade() const {
	return (this->_constGrade);
}

const std::string& AForm::getTarget() const {
	return (this->_target);
}

void AForm::beSigned(const Bureaucrat& bc) {
	if (bc.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else if (this->_isItSigned == true)
		std::cout << bc.getName() << " wont sign the form " << this->getName() << " because it is already signed" << std::endl;
	else {
		this->_isItSigned = true;
		std::cout << bc.getName() << " has signed the form " << this->getName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& fm) {
	os << "Form : " << fm.getName() << "\n";
	os << "Is it signed: " << fm.getIsItSigned() << "\n";
	os << "Grade needed to be signed: " << fm.getSignGrade() << "\n";
	os << "Grade needed to be executed: " << fm.getConstGrade() << std::endl;;
	return (os);
}