#include "RPN.hpp"
#include <cctype>

RPN::RPN() {}

RPN::RPN(const RPN &other) {}

RPN& RPN::operator=(const RPN &other) {return(*this);}

RPN::~RPN() {};

int ErrorMessage(std::string message) {
	std::cout << message << std::endl;
	return(EXIT_FAILURE);
}

bool RPNoperator(std::stack<int> &RPNstack, char op) {
	int operand_1;
	int operand_2;

	if(RPNstack.empty() == true)
		return(false);
	operand_1 = RPNstack.top();
	RPNstack.pop();
	if(RPNstack.empty() == true)
		return(false);
	operand_2 = RPNstack.top();
	RPNstack.pop();
	if(op == ADDITION)
		RPNstack.push(operand_2 + operand_1);
	if(op == SUBSTRACTION)
		RPNstack.push(operand_2 - operand_1);
	if(op == MULTIPLICATION)
		RPNstack.push(operand_2 * operand_1);
	if(op == DIVISION)
		RPNstack.push(operand_2 / operand_1);
	if(op == MODULUS)
		RPNstack.push(operand_2 % operand_1);
	return(true);
}

int RPN::RPNcalculator(std::string RPNexpression) {
	std::string operatoros = "+-/*%";
	std::stack<int> RPNstack;
	for(int i = 0; i < RPNexpression.size(); i++) {
		if(isspace(RPNexpression[i]))
			continue ;
		if(isdigit(RPNexpression[i]))
			RPNstack.push(RPNexpression[i] - '0');
		else if(RPNexpression.find(RPNexpression[i]) != RPNexpression.npos) {
			if(RPNoperator(RPNstack, RPNexpression[i]) == false)
				return(ErrorMessage("Error : Invalid expression"));
		}
		else
			return(ErrorMessage("Error : Invalid expression"));
	}
	if(RPNstack.size() != 1)
		return(ErrorMessage("Error : Invalid expression"));
	std::cout << RPNstack.top() << std::endl;
	return(EXIT_SUCCESS);
}
