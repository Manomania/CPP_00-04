#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW  "\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA "\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"
#define BOLD	"\033[1m"
#define RESET	"\033[0m"

int main() {
	std::cout << GREEN BOLD "=== TEST CREATION ===" RESET << std::endl;
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf) {
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	rrf = someRandomIntern.makeForm("presidential pardon", "Richard");
	Bureaucrat Albert("Albert", 1);
	Albert.executeForm(*rrf);
	Albert.signForm(*rrf);
	Albert.executeForm(*rrf);
	if (rrf) {
		std::cout << *rrf << std::endl;
		delete rrf;
	}
	return (0);
}