#pragma once
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {
public:
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm();
	virtual void execute(Bureaucrat const& executor) const;
};
