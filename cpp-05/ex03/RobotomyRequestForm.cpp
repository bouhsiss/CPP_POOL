#include"RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45) {
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
	this->_Target = Target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	std::cout << "RobotomyRequestForm assignment operator called." << std::endl;
	this->_isSigned = obj._isSigned;
	this->_Target = obj._Target;
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj) {
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm default constructor." << std::endl; 
}

std::string RobotomyRequestForm::getTarget(void) const {return(_Target);}

void RobotomyRequestForm::executeRobotomyrequest() const {
	srand(time(NULL));
	int RandomNb  = rand() % 2;
	std::cout << "Zzzzzzzzzzzzzzz" << std::endl;
	if (RandomNb == 1)
		std::cout << this->_Target << " Has been robotomized successfully." << std::endl;
	else 
		std::cout << this->_Target << "'s robotomy failed." << std::endl;
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if(executor.getGrade() <= this->_ReqExecutionGrade && this->_isSigned == true) {
		executeRobotomyrequest();
		return(true);
	}
	else {
		throw (Form::GradeTooLowException());
		return(false);
	}
}