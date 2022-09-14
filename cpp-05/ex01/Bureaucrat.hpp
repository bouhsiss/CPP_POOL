#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<string>
#include<iostream>
#include<exception>
#include<cstdlib>

#define MIN_RANGE 150
#define MAX_RANGE 1

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat& operator=(const Bureaucrat&);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		const std::string& getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		class GradeTooHighException : public std::exception  {
			public :
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char *what() const throw();
		};
	private :
		const std::string	Name;
		int 				Grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif