#pragma once

#include "AForm.hpp"

class Intern {
private:
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();
	Intern& operator=(const Intern& other);
	AForm* makeForm(const std::string& form, const std::string& target);
};
