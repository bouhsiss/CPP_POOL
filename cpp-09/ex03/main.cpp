#include "PmergeMe.hpp"

int main (int ac, char ** av) {
    if(ac < 2) {
        std::cout << "Usage " << av[0] << " <positive sequence of integers >" << std::endl;
        return(EXIT_FAILURE);
    }
	PmergeMe test(ac, av);
}