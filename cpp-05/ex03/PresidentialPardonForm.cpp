#include"PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5) {
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
	this->_Target = Target;
}

PresidentialPardonForm& PresidentialPardonForm ::operator=(const PresidentialPardonForm& obj) {
	std::cout << "PresidentialPardonForm assignment operator called." << std::endl;
	this->_isSigned = obj._isSigned;
	this->_Target = obj._Target;
	return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj) {
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	*this = obj;
}

PresidentialPardonForm ::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm default constructor." << std::endl; 
}

std::string PresidentialPardonForm::getTarget(void) const {return(_Target);}

void PresidentialPardonForm::executePresidentialPardon(void) const {
	std::cout << this->_Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if(executor.getGrade() <= this->_ReqExecutionGrade && this->_isSigned == true) {
		executePresidentialPardon();
		return(true);
	}
	else {
		throw (Form::GradeTooLowException());
		return(false);
	}
}