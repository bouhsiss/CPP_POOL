#ifndef RobotomyRequestForm_HPP 
#define RobotomyRequestForm_HPP

#include"Form.hpp"
#include"Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();
		std::string getTarget(void) const;
		bool execute(Bureaucrat const &) const;
		void executeRobotomyrequest(void) const;
	private :
		std::string _Target;
};

#endif