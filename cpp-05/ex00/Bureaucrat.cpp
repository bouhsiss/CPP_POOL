#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string Name, int grade) {

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {

}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {

}

Bureaucrat::~Bureaucrat() {

}

const std::string& Bureaucrat::getName(void) const { return(Name); }

int Bureaucrat::getGrade(void) const { return(Grade);}

void Bureaucrat::incrementBureaucrat(void) {

}

void Bureaucrat::decrementBureaucrat(void) {

}

char *Bureaucrat::GradeTooHighException::what() {

}

char *Bureaucrat::GradeTooLowException::what() {

}