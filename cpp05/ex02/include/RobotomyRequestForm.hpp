#pragma once

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
public:
	RobotomyRequestForm(const std::string& target);
	virtual ~RobotomyRequestForm();
	virtual void execute(Bureaucrat const& executor) const;
};
