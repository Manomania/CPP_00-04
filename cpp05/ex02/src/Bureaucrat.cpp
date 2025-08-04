#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150) {

}


Bureaucrat::Bureaucrat(const std::string& name, size_t grade): _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
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

void Bureaucrat::incrementGrade() {
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;

}

void Bureaucrat::decrementGrade() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(AForm& fm) {
	try {
		fm.beSigned(*this);
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << fm.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const& form) {
	try {
		if (!form.getIsItSigned()) {
			std::cout << this->getName() << " cannot execute " << form.getName() << " because it is not signed" << std::endl;
			return;
		}
		if (this->getGrade() > form.getConstGrade()) {
			throw GradeTooLowException();
		}
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc) {
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << std::endl;
	return (os);
}
