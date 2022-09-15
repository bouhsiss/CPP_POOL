#include"PresidentialPardonForm.hpp"


PresidentialPardonForm ::PresidentialPardonForm() : Form("PresidentialPardonForm", 145, 137) {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm ::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 145, 137) {
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
	this->_Target = Target;
}

PresidentialPardonForm& PresidentialPardonForm ::operator=(const PresidentialPardonForm& obj) {
	std::cout << "PresidentialPardonForm assignment operator called." << std::endl;
	this->_isSigned = obj._isSigned;
	this->_Target = obj._Target;
	return(*this);
}

PresidentialPardonForm ::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj.getName(), obj.getReqSignGrade(), obj.getReqExecutionGrade()) {
	*this = obj;
}

PresidentialPardonForm ::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm default constructor." << std::endl; 
}

std::string PresidentialPardonForm ::getTarget(void) const {return(_Target);}