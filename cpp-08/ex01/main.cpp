#include "Span.hpp"

int main()
{
	std::cout << "# SUBJECT TESTS #" << std::endl << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "# MY TESTS #" << std::endl;
	int arr[] = { 91, 18, 37, 28, 82, 56, 50, 47, 97, 24};
	std::vector<int> fillFrom(arr, arr + 10);
	Span sp_1 = Span(10);
	Span sp_2 = Span(8);
	Span sp_3 = Span(1);
	try {
		sp_1.fillVector(fillFrom.begin(), fillFrom.end());
		std::cout << "# Span size = 10 :" << std::endl;
		std::cout << sp_1.shortestSpan() << std::endl;
		std::cout << sp_1.longestSpan() << std::endl;
		std::cout << "# ADDING ONE NUMBER TO FULL SPAN : " << std::endl;
		sp_1.addNumber(9);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "# Span size = 8 : " << std::endl;
		sp_2.fillVector(fillFrom.begin(), fillFrom.end());
		std::cout << sp_2.shortestSpan() << std::endl;
		std::cout << sp_2.longestSpan() << std::endl;
	}
	catch( const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		sp_3.addNumber(9);
		std::cout << sp_3.shortestSpan() << std::endl;
		std::cout << sp_3.longestSpan() << std::endl;
	}
	catch(const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}