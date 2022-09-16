#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Bureaucrat BC_1("steve", 4);
		std::cout << BC_1 << std::endl;

		Intern InternTest;
		Form* Formtest = InternTest.makeForm("shrubbery creation" , "steve");
		// Form *Formtest = InternTest.makeForm("presidential pardon", "seteve");
		// Form* Formtest = InternTest.makeForm("robotomy request", "steve");

		std::cout << *Formtest << std::endl;
		BC_1.signForm(*Formtest);
		BC_1.executeForm(*Formtest);

	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
} 
