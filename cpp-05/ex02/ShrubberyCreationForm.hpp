#ifndef SHRUBBERYCREATIONFORM_HPP 
#define SHRUBBERYCREATIONFORM_HPP

#include"Form.hpp"

class ShrubberyCreationForm : public Form {
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		~ShrubberyCreationForm();
		std::string getTarget(void) const;
	private :
		std::string _Target;
};

#endif