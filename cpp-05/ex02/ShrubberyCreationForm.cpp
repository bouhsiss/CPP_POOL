#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
	this->_Target = Target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	std::cout << "ShrubberyCreationForm assignment operator called." << std::endl;
	this->_isSigned = obj._isSigned;
	this->_Target = obj._Target;
	return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form(obj.getName(), obj.getReqSignGrade(), obj.getReqExecutionGrade()) {
	*this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm default constructor." << std::endl; 
}

std::string ShrubberyCreationForm::getTarget(void) const {return(_Target);}
