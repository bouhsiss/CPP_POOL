#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern {
	public :
		Intern();
		~Intern();
		Form* makeForm(std::string, std::string);
		Form* makeShrubberyCreationForm(std::string target);
		Form* makeRobotomyRequestForm(std::string target);
		Form* makePresidentialPardonForm(std::string target);
};

typedef Form* (Intern::*makeFormPtrs)(std::string);

#endif