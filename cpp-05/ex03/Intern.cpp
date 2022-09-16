#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Form* Intern::makeShrubberyCreationForm(std::string target) {
	Form *InternForm = new ShrubberyCreationForm(target);
	return(InternForm);
}

Form* Intern::makeRobotomyRequestForm(std::string target) {
	Form *InternForm = new RobotomyRequestForm(target);
	return(InternForm);
}

Form* Intern::makePresidentialPardonForm(std::string target) {
	Form *InternForm = new PresidentialPardonForm(target);
	return(InternForm);
}

Form* Intern::makeForm(std::string FormName, std::string target) {
	makeFormPtrs function[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	std::string Names[3] = {"shrubbery creation" , "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++) {
		if (FormName == Names[i])
			return((this->*function[i])(target));
	}
	std::cout << "Form not found" << std::endl;
	return(nullptr);
}