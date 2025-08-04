#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string	_name;
	size_t				_grade;
public:
	class GradeTooHighException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("grade too high\n");
		}
	};
	class GradeTooLowException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("grade too low\n");
		}
	};
	Bureaucrat();
	Bureaucrat(const std::string& name, size_t grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& pther);
	const std::string& getName() const;
	size_t getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm& fm);
	void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc);