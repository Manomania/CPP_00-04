#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137, target) {
	std::cout << this->getName() << " created for target: " << target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (this->getIsItSigned() == false)
		std::cout << this->getName() << " cannot be executed because it needs to be signed" << std::endl;
	else if (executor.getGrade() > this->getConstGrade())
		throw Bureaucrat::GradeTooLowException();
	else {
		std::ofstream myFile;
		myFile.open((this->getTarget() + "_shrubbery").c_str());
		myFile << "     *     \n";
		myFile << "    ***    \n";
		myFile << "   *****   \n";
		myFile << "  *******  \n";
		myFile << " ********* \n";
		myFile << "***********\n";
		myFile << "    |||    \n";
		myFile << "    |||    \n";
		myFile << "    ‾‾‾    " << std::endl;
		myFile.close();
	}
}