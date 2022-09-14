#include "Form.hpp"

Form::Form() {
    std::cout << "Default constructor called." << std::endl;
}

Form::Form(std::string Name, bool SignedFlag, int SignGrade, int ExecutionGrade) : _Name(Name), _isSigned(SignedFlag), _SignGrade(SignGrade), _ExecutionGrade(ExecutionGrade) {
    if(SignGrade < 1 || ExecutionGrade < 1)
        throw (Form::GradeTooHighException());
    if (SignGrade > 150 || ExecutionGrade < 150)
        throw (Form::GradeTooLowException());
    std::cout << "Forn constructor called." << std::endl;
}

Form& operator=(const Form& obj);
{
    std::cout << "Form assigment operator called." << std::endl;
    _isSigned = obj._isSigned;
    return(*this);
}

Form::Form(const Form& obj) : _Name(obj._Name), _isSigned(obj,_isSigned), _SignGrade(obj._SignGrade), _ExecutionGrade(obj._ExecutionGrade){
    std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form() {
    std::cout << "Form default destructor called" << std::endl;
}

const std::string Form::getName(void) const {return(_Name)}

bool Form::getIsSigned(void) const {return(_isSigned);}

const int Form::getSignGrade(void) const {return(_SignGrade);}

const int Form::getExecutionGrade(void) const {return(_ExecutionGrade);}

const char *Form::GradeTooHighException::what() const throw() {
    return("Grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw() {
    return("Grade is too low.");
}


std::ostream& operator<<(std::ostream& os, const Form& obj) {
    std::cout << "========== Form infos ========" << std::endl;
    std::cout << "Form::Name : " << obj._Name << std::endl;
    std::cout << "Form::isSigned : " << obj._isSigned << std::endl;
    std::cout << "Form::SignGrade : " << obj._SignGrade << std::endl;
    std::cout << "Form::ExecutionGrade : " << obj._ExecutionGrade << std::endl;
    return(os);
}