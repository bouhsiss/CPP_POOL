#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(std::string, int, int);
		Form& operator=(const Form&);
		Form(const Form&);
		~Form();
		const std::string getName(void) const;
		bool getIsSigned(void) const;
		int getReqSignGrade(void) const;
		int getReqExecutionGrade(void) const;
		bool beSigned(Bureaucrat& );
		virtual bool execute(Bureaucrat const & executor) const = 0;
		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
	protected :
		Form();
		const std::string _Name;
		bool _isSigned;
		const int _ReqSignGrade;
		const int _ReqExecutionGrade;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif
