#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
private:
	const std::string	_name;
	bool				_isItSigned;
	const size_t		_signGrade;
	const size_t		_constGrade;
	const std::string	_target;
public:
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw() {
			return ("grade too low");
		}
	};
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw() {
			return ("grade too high");
		}
	};
	AForm();
	AForm(const std::string& name, size_t signGrade, size_t constGrade);
	AForm(const std::string& name, size_t signGrade, size_t constGrade, const std::string& target);
	AForm(const AForm& copy);
	virtual ~AForm();
	AForm& operator=(const AForm& other);
	const std::string& getName() const;
	bool getIsItSigned() const;
	size_t getSignGrade() const;
	size_t getConstGrade() const;
	const std::string& getTarget() const;
	void beSigned(const Bureaucrat& bc);
	virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& fm);
