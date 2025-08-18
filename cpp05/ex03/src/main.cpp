#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	std::cout << GREEN BOLD "=== TEST PRESIDENTIAL ===" RESET << std::endl;
	PresidentialPardonForm Form1("Francois");
	std::cout << Form1 << std::endl;
	Bureaucrat Albert("Albert", 5);
	std::cout << Albert << std::endl;
	Albert.signForm(Form1);
	Albert.executeForm(Form1);
	std::cout << YELLOW BOLD "=== TEST ROBOTOMY ===" RESET << std::endl;
	RobotomyRequestForm Form2("Jean-Pierre");
	std::cout << Form2 << std::endl;
	Bureaucrat Gertrude("Gertrude", 5);
	std::cout << Gertrude << std::endl;
	Gertrude.signForm(Form2);
	Gertrude.executeForm(Form2);
	std::cout << BLUE BOLD "=== TEST SHRUBBERY ===" RESET << std::endl;
	ShrubberyCreationForm Form3("Camille");
	std::cout << Form3 << std::endl;
	Bureaucrat Bernard("Bernard", 137);
	std::cout << Bernard << std::endl;
	Bernard.signForm(Form3);
	Bernard.executeForm(Form3);

	return (0);
}