#include "Span.hpp"


const char *Span::NoElementCanBeAdded::what() const throw() {
	return("Span : Container is full, no element can be added");
}

const char *Span::NoSpanCanBeFound::what() const throw() {
	return("Span : Container has one element, no span can be found");
}

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span& Span::operator=(const Span& obj) {
	this->IntVector = obj.IntVector;
	this->_N = obj._N;
	return(*this);
}

Span::Span(const Span& obj) {
	*this = obj;
}

Span::~Span() {}

void Span::addNumber(int Nb) {
	if (this->IntVector.size() >= _N)
		throw NoElementCanBeAdded();
	else
		IntVector.push_back(Nb);
}

void Span::fillVector(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	int EmptyCases = _N - IntVector.size();
	if((end - begin) > EmptyCases)
		throw NoElementCanBeAdded();
	else {
		IntVector.insert(IntVector.end(), begin, end);
	}
}

int Span::shortestSpan() {

	int ShortestSpan;
	std::vector<int>::iterator Iter;
	std::sort(IntVector.begin(), IntVector.end());
	if (IntVector.size() >1) {
		Iter = IntVector.begin();
		ShortestSpan = *(Iter+1) - *(Iter);
		for(; Iter != --IntVector.end(); Iter++) {
			if ((*(Iter+1) - *(Iter)) < ShortestSpan)
				ShortestSpan = *(Iter+1) - *(Iter);
		}
		return(ShortestSpan);
	}
	throw NoSpanCanBeFound();
}

int Span::longestSpan() {
	std::sort(IntVector.begin(), IntVector.end());
	if(IntVector.size() > 1) {
		return(*--IntVector.end() - *IntVector.begin());
	}
	throw NoSpanCanBeFound();
}

