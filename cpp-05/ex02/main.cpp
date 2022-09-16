#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat BC_1("steve", 4);
		std::cout << BC_1 << std::endl;

		PresidentialPardonForm PPF("steve");
		std::cout << PPF << std::endl;
		BC_1.signForm(PPF);
		BC_1.executeForm(PPF);

		ShrubberyCreationForm SCF("steve");
		std::cout << SCF << std::endl;
		BC_1.signForm(SCF);
		BC_1.executeForm(SCF);

		RobotomyRequestForm RRF("steve");
		std::cout << RRF << std::endl;
		BC_1.signForm(RRF);
		BC_1.executeForm(RRF);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
} 
