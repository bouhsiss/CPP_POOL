#ifndef RobotomyRequestForm_HPP 
#define RobotomyRequestForm_HPP

#include"Form.hpp"

class RobotomyRequestForm : public Form {
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();
		std::string getTarget(void) const;
	private :
		std::string _Target;
};

#endif