#pragma once

#include <iostream>
#include "Form.hpp"

class Bureaucrat {
private:
	const std::string	_name;
	size_t				_grade;
public:
	~Bureaucrat();
	class GradeTooHighException: public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Grade too high, 1 max\n");
		}
	};
	class GradeTooLowException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Grade too low, 150 min\n");
		}
	};
	Bureaucrat(const std::string& name, size_t grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& pther);
	const std::string& getName() const;
	size_t getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(const Form& fm);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bc);