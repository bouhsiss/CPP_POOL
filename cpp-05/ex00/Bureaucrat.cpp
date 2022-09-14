#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat default constructor called." << std::cout;
}

Bureaucrat::Bureaucrat(std::string NameVal, int gradeVal) : Name(NameVal){
    if(gradeVal < 1)
        throw (Bureaucrat::GradeTooHighException());
    if (gradeVal > 150)
        throw (Bureaucrat::GradeTooLowException());
    std::cout << "Bureaucrat constructor called." << std::endl;
    this->Grade = gradeVal;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
    std::cout << "Bureaucrat assignment operator called." << std::endl;
    Grade = obj.Grade;
    return(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : Name(obj.Name) {
    std::cout << "copy constructor called." << std::endl;
    (*this) = obj;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat default destructor called." << std::endl;
}

const std::string& Bureaucrat::getName(void) const { return(Name); }

int Bureaucrat::getGrade(void) const { return(Grade);}

void Bureaucrat::incrementGrade(void) {
    if (Grade == MAX_RANGE)
        throw GradeTooHighException();
    else {
        Grade--;
        std::cout << "Grade Incremennted." << std::endl;
    }
}

void Bureaucrat::decrementGrade(void) {
    if (Grade == MIN_RANGE)
        throw GradeTooLowException();
    else {
        Grade++;
        std::cout <<"Grade decremented." << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low.");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return(os);
}