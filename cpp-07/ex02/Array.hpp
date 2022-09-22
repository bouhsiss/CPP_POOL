#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <class T>
class Array {
	public :
		Array();
		Array(unsigned int n);
		Array& operator=(const Array&);
		Array(const Array&);
		~Array();
		T& operator[](int index);
		// int size() const;
		T *getArr(void) const;
		void setArr(T);
		int size(void) const;
	private :
		T *_arr;
		int _size;
};

#include "Array.tpp"

#endif