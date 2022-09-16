#ifndef PRESIDENTIALPARDONFORM_HPP 
#define PRESIDENTIALPARDONFORM_HPP

#include"Form.hpp"
#include"Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm();
		std::string getTarget(void) const;
		bool execute(Bureaucrat const &) const;
		void executePresidentialPardon(void) const;
	private :
		std::string _Target;
};

#endif