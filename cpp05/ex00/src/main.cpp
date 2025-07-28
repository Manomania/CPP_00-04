#include "Bureaucrat.hpp"

int main() {
	std::cout << "=== TEST CONSTRUCT INSIDE LIMIT ===" << std::endl;
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
	std::cout << "=== TEST CONSTRUCT OUTSIDE LIMIT ===" << std::endl;
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
	std::cout << "=== TEST INCREMENT OR DECREMENT ===" << std::endl;
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
