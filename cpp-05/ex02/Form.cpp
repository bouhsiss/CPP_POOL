#include "Form.hpp"

Form::Form() : _isSigned(false), _ReqSignGrade(0), _ReqExecutionGrade(0){
    std::cout << "Default constructor called." << std::endl;
}

Form::Form(std::string Name, int ReqSignGrade, int ExecutionGrade) : _Name(Name), _isSigned(false), _ReqSignGrade (ReqSignGrade), _ReqExecutionGrade(ExecutionGrade) {
    if (ReqSignGrade < 1 || ExecutionGrade < 1)
        throw (Form::GradeTooHighException());
    if  (ReqSignGrade > 150 || ExecutionGrade >150)
        throw (Form::GradeTooLowException());
    std::cout << "Form constructor called." << std::endl;
}

Form& Form::operator=(const Form& obj)
{
    std::cout << "Form assigment operator called." << std::endl;
    _isSigned = obj._isSigned;
    return(*this);
}

Form::Form(const Form& obj) : _Name(obj._Name), _isSigned(obj._isSigned), _ReqSignGrade(obj._ReqSignGrade), _ReqExecutionGrade(obj._ReqExecutionGrade){
    std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form() {
    std::cout << "Form default destructor called" << std::endl;
}

const std::string Form::getName(void) const {return(_Name);}

bool Form::getIsSigned(void) const {return(_isSigned);}

int Form::getReqSignGrade(void) const {return(_ReqSignGrade);}

int Form::getReqExecutionGrade(void) const {return(_ReqExecutionGrade);}

const char *Form::GradeTooHighException::what() const throw() {
    return("Grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw() {
    return("Grade is too low.");
}


bool Form::beSigned(Bureaucrat& obj){
	if(obj.getGrade() <= _ReqSignGrade) {
		_isSigned = true;
		return(true);
	}
	else {
		throw (Form::GradeTooLowException());
		return(false);
	}
}


std::ostream& operator<<(std::ostream& os, const Form& obj) {
    std::cout << "========== Form infos ========" << std::endl;
    std::cout << "Form::Name : " << obj.getName() << std::endl;
    std::cout << "Form::isSigned : " << obj.getIsSigned() << std::endl;
    std::cout << "Form::SignGrade : " << obj.getReqSignGrade() << std::endl;
    std::cout << "Form::ExecutionGrade : " << obj.getReqExecutionGrade() << std::endl;
    return(os);
}