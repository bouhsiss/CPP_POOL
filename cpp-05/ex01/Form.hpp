#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form {
	Form();
	Form(std::string, bool, int, int);
	Form& operator=(const Form&)
	private :
		const std::string Name;
		bool SignedFlag;
		const int SignGrade;
		const int ExecutionGrade;
};

#endif
