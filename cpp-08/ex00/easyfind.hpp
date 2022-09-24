#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <iterator>
# include <list>


class NoOccurrenceFound : public std::exception {
	public :
		const char *what() const throw();
};

const char *NoOccurrenceFound::what () const throw() {
	return ("No occurence has been found");
}


template <typename T, typename F>
typename T::iterator easyfind(T container, F Tofind) {
	typedef typename T::iterator Iterator;
	Iterator it = std::find(container.begin(), container.end(), Tofind);
	if(it != container.end())
		return(it);
	throw NoOccurrenceFound();
}
#endif