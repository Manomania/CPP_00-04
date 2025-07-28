#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	bool				_isItSigned;
	const size_t		_signGrade;
	const size_t		_constGrade;
public:
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw() {
			return ("Too low");
		}
	};
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw() {
			return ("Too high");
		}
	};
	Form(const std::string& name, size_t signGrade, size_t constGrade);
	Form(const Form& copy);
	~Form();
	Form& operator=(const Form& other);
	const std::string& getName() const;
	bool getIsItSigned() const;
	size_t getSignGrade() const;
	size_t getConstGrade() const;
	void beSigned(const Bureaucrat& bc);
};

std::ostream& operator<<(std::ostream& os, Form& fm);
