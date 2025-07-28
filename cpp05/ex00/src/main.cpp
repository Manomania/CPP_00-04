#include "Bureaucrat.hpp"

#define BLACK	"\033[30m"
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define MAGENTA	"\033[35m"
#define CYAN	"\033[36m"
#define WHITE	"\033[37m"
#define BOLD	"\033[1m"
#define RESET	"\033[0m"

int main() {
	std::cout << GREEN BOLD"=== TEST CONSTRUCT INSIDE LIMIT ===" RESET << std::endl;
	try {
		Bureaucrat Albert("Albert", 2);
		std::cout << Albert << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Gerard("Gerard", 75);
		std::cout << Gerard << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Bernard("Bernard", 149);
		std::cout << Bernard << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW BOLD"=== TEST CONSTRUCT OUTSIDE LIMIT ===" RESET << std::endl;
	try {
		Bureaucrat Gertrude("Gertrude", 151);
		std::cout << Gertrude << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Jackeline("Jackeline", 0);
		std::cout << Jackeline << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << BLUE BOLD"=== TEST INCREMENT OR DECREMENT ===" RESET << std::endl;
	try {
		Bureaucrat Bilibob("Bilibob", 2);
		std::cout << Bilibob << std::endl;
		Bilibob.incrementGrade();
		std::cout << Bilibob << std::endl;
		Bilibob.incrementGrade();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat François("François", 75);
		std::cout << François << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Bertrand("Bertrand", 149);
		std::cout << Bertrand << std::endl;
		Bertrand.decrementGrade();
		std::cout << Bertrand << std::endl;
		Bertrand.decrementGrade();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
