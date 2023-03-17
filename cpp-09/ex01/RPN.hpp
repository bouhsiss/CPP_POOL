#pragma once
#include <iostream>
#include <string>
#include <stack>

#define ADDITION '+'
#define SUBSTRACTION '-'
#define MULTIPLICATION '*'
#define DIVISION '/'
#define MODULUS '%'

class RPN {
	public :
		RPN();
		RPN(const RPN &other);
		RPN& operator=(const RPN &other);
		~RPN();
		int RPNcalculator(std::string RPNexpression);
};