#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <Bureaucrat.hpp>


class Form {
	Form();
	Form(std::string, bool, int, int);
	Form& operator=(const Form&);
	Form(const Form&);
	~Form();
	const std::string getName(void) const;
	bool getIsSigned(void) const;
	const int getSignGrade(void) const;
	const int getExecutionGrade(void) const;
	void beSigned(Bureaucrat& );
	class GradeTooHighException : public std::exception {
		public :
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public :
			const char* what() const throw();
	};
	private :
		const std::string _Name;
		bool _isSigned;
		const int _SignGrade;
		const int _ExecutionGrade;
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif
