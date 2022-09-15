#include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 145, 137) {
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 145, 137) {
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
	this->_Target = Target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	std::cout << "RobotomyRequestForm assignment operator called." << std::endl;
	this->_isSigned = obj._isSigned;
	this->_Target = obj._Target;
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj.getName(), obj.getReqSignGrade(), obj.getReqExecutionGrade()) {
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm default constructor." << std::endl; 
}

std::string RobotomyRequestForm::getTarget(void) const {return(_Target);}