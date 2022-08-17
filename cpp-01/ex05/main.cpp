#include"Harl.hpp"

int main()
{
	Harl instance;

	instance.complain("debug");
	instance.complain("DEBUG");

	instance.complain("info");
	instance.complain("INFO");
	
	instance.complain("warning");
	instance.complain("WARNING");

	instance.complain("error");
	instance.complain("ERROR");
}