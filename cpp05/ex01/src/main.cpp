#include "Bureaucrat.hpp"

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

void testValidConstructions() {
	std::cout << GREEN BOLD"=== VALID CONSTRUCTIONS ===" RESET << std::endl;

	try {
		Bureaucrat albert("Albert", 2);
		Form constitution("Constitution", 123, 123);
		std::cout << albert << std::endl;
		std::cout << constitution << std::endl;
		albert.signForm(constitution);
		albert.signForm(constitution);
		std::cout << constitution << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat gerard("Gerard", 75);
		Form caf("CAF", 75, 89);
		std::cout << gerard << std::endl;
		std::cout << caf << std::endl;
		gerard.signForm(caf);
		std::cout << caf << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void testInsufficientGrade() {
	std::cout << YELLOW BOLD"=== INSUFFICIENT GRADE ===" RESET << std::endl;

	try {
		Bureaucrat bernard("Bernard", 149);
		Form apl("APL", 34, 12);
		std::cout << bernard << std::endl;
		std::cout << apl << std::endl;
		bernard.signForm(apl);
		std::cout << apl << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void testInvalidConstructions() {
	std::cout << BLUE BOLD"=== INVALID CONSTRUCTIONS ===" RESET << std::endl;

	try {
		Bureaucrat gertrude("Gertrude", 151);
		std::cout << gertrude << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat jackeline("Jackeline", 0);
		std::cout << jackeline << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Form invalidHigh("Invalid High", 0, 50);
		std::cout << invalidHigh << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Form invalidLow("Invalid Low", 50, 151);
		std::cout << invalidLow << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void testGradeModifications() {
	std::cout << MAGENTA BOLD"=== GRADE MODIFICATIONS ===" RESET << std::endl;

	try {
		Bureaucrat bilibob("Bilibob", 2);
		Form conge("Demande de conge", 1, 1);
		std::cout << bilibob << std::endl;
		bilibob.incrementGrade();
		std::cout << bilibob << std::endl;
		bilibob.signForm(conge);
		std::cout << conge << std::endl;
		bilibob.incrementGrade();
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Bureaucrat bertrand("Bertrand", 149);
		std::cout << bertrand << std::endl;
		bertrand.decrementGrade();
		std::cout << bertrand << std::endl;
		bertrand.decrementGrade();
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

void testComplexScenarios() {
	std::cout << CYAN BOLD"=== COMPLEX SCENARIOS ===" RESET << std::endl;

	try {
		Bureaucrat chef("Chef", 25);
		Bureaucrat stagiaire("Stagiaire", 100);
		Form budget("Demande de budget", 30, 15);
		Form materiel("Bon de commande materiel", 80, 60);

		std::cout << chef << std::endl;
		std::cout << stagiaire << std::endl;
		std::cout << budget << std::endl;
		std::cout << materiel << std::endl;

		chef.signForm(budget);
		stagiaire.signForm(budget);
		stagiaire.signForm(materiel);
		chef.signForm(materiel);

		std::cout << budget << std::endl;
		std::cout << materiel << std::endl;
	}
	catch (std::exception& e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}

int main() {
	testValidConstructions();
	std::cout << std::endl;

	testInsufficientGrade();
	std::cout << std::endl;

	testInvalidConstructions();
	std::cout << std::endl;

	testGradeModifications();
	std::cout << std::endl;

	testComplexScenarios();

	return 0;
}