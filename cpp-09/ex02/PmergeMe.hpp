#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <iomanip>
#define K 10
class PmergeMe {
	public :
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe& operator=(const PmergeMe &other);
		~PmergeMe();
		void PmergeSort();
		
	private :
		PmergeMe();
		void displaySortedContainer();
		void displayTime();
		void vectMergeInsertSort(std::vector<int> &vector, int n);
		void dequeMergeInsertSort(std::deque<int> &deque,int n);
		void checker();
		template<typename Container>
		void removeDups(Container &c);
		bool Error;
		std::vector<int> vectContainer;
		std::deque<int> dequeContainer;
		double vectorElapsedTime;
		double dequeElapsedTime;
	
};