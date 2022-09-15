#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
		Form Form("Form_1", 0, 1);
		// Form Form("Form_2", 1, 0);
		// Form Form("Form_3", 1, 151);
		// Form Form("Form_4", 151, 1);
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	try {
		std::cout << "        ===========" << std::endl;
		Bureaucrat Bureaucrat("Steve", 40); 
		Form Form("Form_5", 150, 150);
		std::cout << "        ===========" << std::endl;
		std::cout << Form << std::endl;
		std::cout << "        ===========" << std::endl;
		std::cout << Bureaucrat << std::endl;
		std::cout << "        ===========" << std::endl;
		Form.beSigned(Bureaucrat);
		Bureaucrat.signForm(Form);
		std::cout << "        ===========" << std::endl;
		std::cout << Form << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl << "[SECOND TRY]" << std::endl;
		Bureaucrat Bureaucrat("Steve", 40); 
		Form Form("Form_6", 1, 1);
		std::cout << "        ===========" << std::endl;
		std::cout << Form << std::endl;
		std::cout << "        ===========" << std::endl;
		std::cout << Bureaucrat << std::endl;
		std::cout << "        ===========" << std::endl;
		Bureaucrat.signForm(Form);
		std::cout << "        ===========" << std::endl;
		std::cout << Form << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return(EXIT_SUCCESS);
} 
