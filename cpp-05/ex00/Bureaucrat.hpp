#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<string>
#include<iostream>
#include<exception>

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat& operator=(const Bureaucrat&);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		const std::string& getName(void) const;
		int getGrade(void) const;
		void incrementBureaucrat(void);
		void decrementBureaucrat(void);
		class GradeTooHighException : public std::exception  {
			public :
				char *what();
		};
		class GradeTooLowException : public std::exception {
			public :
				char *what();
		};
	private :
		const std::string	Name;
		int 				Grade;
};

#endif