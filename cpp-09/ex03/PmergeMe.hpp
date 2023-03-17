#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <cstdlib>

class PmergeMe {
	public :
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
		~PmergeMe();
	private :
		PmergeMe();
		bool hasDups();
		std::vector<int> vectContainer;
		std::list<int> listContainer;
	
};