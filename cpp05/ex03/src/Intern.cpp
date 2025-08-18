#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {

}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern::~Intern() {

}

Intern& Intern::operator=(const Intern& other) {
	if (this == &other)
		return (*this);
	return (*this);
}

static AForm* createPresidentialPardon(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

static AForm* createRobotomyRequest(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

static AForm* createShrubberyCreation(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
	const std::string formNames[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"};
	AForm* (*formCreator[3])(const std::string& name) = {
	createPresidentialPardon,
	createRobotomyRequest,
	createShrubberyCreation};

	for (int i = 0; i < 3; i++) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return (formCreator[i](target));
		}
	}
	std::cout << "Intern cannot create the form" << std::endl;
	return (NULL);
}