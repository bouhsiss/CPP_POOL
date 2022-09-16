#include "Bureaucrat.hpp"

int main()
{
    try {
        // Bureaucrat Leader("Steve", 0);
        Bureaucrat Leader("Harold", 3);
        // Bureaucrat Leader("pusspuss", 151);
        std::cout << "        ===========" << std::endl;
        std::cout << Leader;
        std::cout << "changing grade ..." << std::endl;
        // Leader.decrementGrade();
        Leader.incrementGrade();
        std::cout << Leader;
        std::cout << "        ===========" << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return(EXIT_SUCCESS);
} 