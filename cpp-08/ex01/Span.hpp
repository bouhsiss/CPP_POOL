#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>

class Span {
	public :
		Span();
		Span(unsigned int);
		Span& operator=(const Span&);
		Span(const Span&);
		~Span();
		void addNumber(int);
		void fillVector(std::vector<int>::iterator, std::vector<int>::iterator);
		int shortestSpan();
		int longestSpan();
		void prinVector(){
			std::vector<int>::iterator Iter;
			for(Iter = IntVector.begin(); Iter != IntVector.end(); Iter++) {
				std::cout << *Iter << std::endl ;
			}
		};
		class NoElementCanBeAdded :public std::exception {
			public :
				const char *what() const throw();
		};
		class NoSpanCanBeFound : public std::exception {
			public :
				const char *what() const throw();
		};
	private :
		std::vector<int> IntVector;
		unsigned int _N;
};

#endif