#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T> {
	public :
		MutantStack(){}
		MutantStack(const MutantStack& obj){*this = obj;}
		MutantStack& operator=(const MutantStack&){return(*this);}
		~MutantStack(){}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return(this->c.begin());}
		iterator end() { return(this->c.end());}
};

#endif


