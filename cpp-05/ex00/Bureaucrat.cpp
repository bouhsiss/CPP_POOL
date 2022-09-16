#include"Bureaucrat.hpp"


/* Canonical form */

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _Name(Name){
    if(Grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    if (Grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat constructor called." << std::endl;
    this->_Grade = Grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    std::cout << "Bureaucrat assignment operator called." << std::endl;
    this->_Grade = obj._Grade;
    return(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _Name(obj._Name) {
    std::cout << "copy constructor called." << std::endl;
    (*this) = obj;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat default destructor called." << std::endl;
}

/*   accessors  */
const std::string& Bureaucrat::getName(void) const { return(_Name); }

int Bureaucrat::getGrade(void) const { return(_Grade);}

/*    methods    */

void Bureaucrat::incrementGrade(void) {
    if (this->_Grade == MAX_RANGE)
        throw GradeTooHighException();
    else {
       this->_Grade--;
        std::cout << "Grade Incremennted." << std::endl;
    }
}

void Bureaucrat::decrementGrade(void) {
    if (this->_Grade == MIN_RANGE)
        throw GradeTooLowException();
    else {
        this->_Grade++;
        std::cout <<"Grade decremented." << std::endl;
    }
}

/*    exception functions    */
const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low.");
}

/*    overload    */

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return(os);
}