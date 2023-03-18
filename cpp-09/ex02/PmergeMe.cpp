#include "PmergeMe.hpp"

/*--------------------------------------------*/
/*--------------   Canonical form ------------*/
/*--------------------------------------------*/

PmergeMe::PmergeMe() {}

bool strisdigit(char *arg) {
	int i = 0;
	while(arg[i] == '+')
		i++;
	while(arg[i]) {
		if(isdigit(arg[i]) == false)
			return(false);
		i++;
	}
	return(true);
}

PmergeMe::PmergeMe(int ac, char **av) {
	Error = false;
    for (int i = 1; i < ac; i++) {
		if(atoi(av[i]) < 0  || strisdigit(av[i]) == false) {
			Error = true;
			break ;
		}
        vectContainer.push_back(atoi(av[i]));
        dequeContainer.push_back(atoi(av[i]));
    }
}

PmergeMe::PmergeMe(const PmergeMe &other) {
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other) {
    vectContainer = other.vectContainer;
    dequeContainer = other.dequeContainer;
    return(*this);
}

PmergeMe::~PmergeMe() {}

/*--------------------------------------------*/
/*--------------   Error handling ------------*/
/*--------------------------------------------*/

bool hasDups(std::vector<int> vector) {
    std::set<int> dupsChecker(vector.begin(), vector.end());
    return(dupsChecker.size() != vector.size());
}

template <typename Container>
void PmergeMe::removeDups(Container &c) {
	Container uniqueVals;
	typename Container::iterator It;

	for(It = c.begin(); It != c.end(); It++) {
		if(find(uniqueVals.begin(), uniqueVals.end(), *It) == uniqueVals.end())
			uniqueVals.push_back(*It);
	}
	c = uniqueVals;
}

void PmergeMe::checker() {
	if(Error == true) {
		std::cout << "Error" << std::endl;
		exit(EXIT_FAILURE);
	}
}

/*--------------------------------------------*/
/*---------   vector merge insert sort -------*/
/*--------------------------------------------*/

void insertionSort(std::vector<int> &vector, int n) {
	int i;
	int j;
	int key;

	for(i = 1 ; i < n; i++){
		key = vector[i];
		j = i - 1;
		while(j >= 0 && vector[j] > key) {
			vector[j + 1] = vector[j];
			j = j - 1;
		}
		vector[j + 1] = key;
	}
}

void mergeTwoSortedVectors(std::vector<int> leftSubVector, std::vector<int> rightSubVector, std::vector<int> &vector) {
	int i = 0;
	int j = 0;
	int k = 0;


	while(i < leftSubVector.size() && j < rightSubVector.size()) {
		if(leftSubVector[i] <= rightSubVector[j]) {
			vector[k] = leftSubVector[i];
			i++;
		}
		else {
			vector[k] = rightSubVector[j];
			j++;
		}
		k++;
	}

	while(i < leftSubVector.size()) {
		vector[k] = leftSubVector[i];
		i++;
		k++;
	}
	while(j < rightSubVector.size()) {
		vector[k] = rightSubVector[j];
		j++;
		k++;
	}
}

void PmergeMe::vectMergeInsertSort(std::vector<int> &vector, int n) {
	if(n > K) {
		int mid = vector.size() /2 + 1;

		std::vector<int> leftSubVector(vector.begin(), vector.begin() + mid);
		std::vector<int> rightSubVector(vector.begin()+mid, vector.end());

		vectMergeInsertSort(leftSubVector, leftSubVector.size());
		vectMergeInsertSort(rightSubVector, rightSubVector.size());

		mergeTwoSortedVectors(leftSubVector, rightSubVector, vector);
	}
	else
		insertionSort(vector, n);
}

/*--------------------------------------------*/
/*--------- deque merge insert sort ----------*/
/*--------------------------------------------*/

void insertionSort(std::deque<int> &deque, int n) {
	int i;
	int j;
	int key;

	for(i = 1 ; i < n; i++){
		key = deque[i];
		j = i - 1;
		while(j >= 0 && deque[j] > key) {
			deque[j + 1] = deque[j];
			j = j - 1;
		}
		deque[j + 1] = key;
	}
}

void mergeTwoSortedDeques(std::deque<int> leftSubDeque, std::deque<int> rightSubDeque, std::deque<int> &deque) {
	int i = 0;
	int j = 0;
	int k = 0;

	while(i < leftSubDeque.size() && j < rightSubDeque.size()) {
		if(leftSubDeque[i] <= rightSubDeque[j]) {
			deque[k] = leftSubDeque[i];
			i++;
		}
		else {
			deque[k] = rightSubDeque[j];
			j++;
		}
		k++;
	}

	while(i < leftSubDeque.size()) {
		deque[k] = leftSubDeque[i];
		i++;
		k++;
	}
	while(j < rightSubDeque.size()) {
		deque[k] = rightSubDeque[j];
		j++;
		k++;
	}
}

void PmergeMe::dequeMergeInsertSort(std::deque<int> &deque, int n) {
	if(n > K) {
		int mid = deque.size() / 2 + 1;

		std::deque<int> leftSubDeque(deque.begin(), deque.begin() + mid);
		std::deque<int> rightSubDeque(deque.begin() + mid, deque.end());

		dequeMergeInsertSort(leftSubDeque, leftSubDeque.size());
		dequeMergeInsertSort(rightSubDeque, rightSubDeque.size());

		mergeTwoSortedDeques(leftSubDeque, rightSubDeque, deque);
	}
	else
		insertionSort(deque, deque.size());
}

/*--------------------------------------------*/
/*---------------- display -------------------*/
/*--------------------------------------------*/

void PmergeMe::displaySortedContainer() {
	for(int i = 0; i < vectContainer.size(); i++) 
		std::cout << vectContainer[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::displayTime() {
	std::cout  << "Time to process a range of " << vectContainer.size() << " elements with std::vector : " << vectorElapsedTime * 1000000 << " us" << std::endl; 
	std::cout << "Time to process a range of " << vectContainer.size() << " elements with std::deque : " << dequeElapsedTime * 1000000 << " us" << std::endl; 
}

void PmergeMe::PmergeSort() {
	checker();
	if(hasDups(vectContainer)) {
		std::cout << "Warning : the number sequence you entered has duplicated numbers, the program will only leave unique values" << std::endl;
		removeDups(vectContainer);
		removeDups(dequeContainer);
	}
	std::cout << "Before: ";
	displaySortedContainer();
	clock_t dequeStart = clock();
	dequeMergeInsertSort(dequeContainer, dequeContainer.size());
	clock_t dequeEnd = clock();
	dequeElapsedTime = ((double)(dequeEnd - dequeStart)) / CLOCKS_PER_SEC ;
	clock_t vectStart = clock();
	vectMergeInsertSort(vectContainer, vectContainer.size());
	clock_t vectEnd = clock();
	vectorElapsedTime = ((double)(vectEnd - vectStart)) / CLOCKS_PER_SEC ;
	std::cout << "After: ";
	displaySortedContainer();
	displayTime();
}



