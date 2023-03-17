#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        vectContainer.push_back(atoi(av[i]));
        listContainer.push_back(atoi(av[i]));
    }
}

PmergeMe::PmergeMe(const PmergeMe &other) {
    *this = other;
}

bool PmergeMe::hasDups() {
    std::set<int> dupsChecker(vectContainer.begin(), vectContainer.end());
    return(dupsChecker.size() != vectContainer.size());
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other) {
    vectContainer(other.vectContainer);
    listContainer(other.listContainer);
    return(*this);
}

PmergeMe::~PmergeMe() {}
