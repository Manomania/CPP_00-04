#pragma once

#include <iostream>

class Bureaucrat {
private:
	const std::string	_name;
	size_t				_grade;
public:
	Bureaucrat(const std::string& name, size_t grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	class GradeTooHighException: public std::exception{

	};
	class GradeTooLowException: public std::exception {

	};
	~Bureaucrat();
	const std::string& getName() const;
	size_t getGrade() const;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bc);