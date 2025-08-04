#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5, target) {
	std::cout << this->getName() << " created for target: " << target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->getIsItSigned() == false)
		std::cout << this->getName() << " cannot be executed because it needs to be signed" << std::endl;
	else if (executor.getGrade() > this->getConstGrade())
		throw GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}