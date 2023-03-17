#pragma once

#include <iostream>
#include <vector>
#include <list>

class PmergeMe {
	public :
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
		~PmergeMe();
	private :
		std::vector<int> vectContainer;
		std::list<int> listContainer;
	
};