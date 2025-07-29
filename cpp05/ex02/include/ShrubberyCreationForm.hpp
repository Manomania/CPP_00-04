#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
public:
	ShrubberyCreationForm(const std::string& target);
	virtual ~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const& executor) const;
};
