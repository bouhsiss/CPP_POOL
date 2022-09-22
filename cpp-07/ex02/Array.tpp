#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"


template <class T>
Array<T>::Array () {
	this->_arr = new T[0];
	this->_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n) {
	this->_arr = new T[n]();
	this->_size = n;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& obj) {
	this->_arr = new T[obj._size]();
	this->_size = obj._size;
	for(int i = 0; i < this->_size; i++)
		this->_arr[i] = obj._arr[i];
	return(*this);
}

template<class T>
Array<T>::Array(const Array<T>& obj) {
	this->_arr = new T[obj._size]();
	this->_size = obj._size;
 	for(int i = 0; i < this->_size; i++)
		this->_arr[i] = obj._arr[i];
}

template<class T>
Array<T>::~Array () { delete[] _arr ;}

template<class T>
T &Array<T>::operator[] (int index) {
	if (index >= this->_size)	
		throw (std::exception());
	return(_arr[index]);
}

template<class T>
T *Array<T>::getArr(void) const {
	return(this->_arr);
}

template<class T>
void Array<T>::setArr(T src) {
	for(int i = 0; i < _size; i++)
		_arr[i] = src;
}

template<class T>
int Array<T>::size(void) const { return(this->_size); }

#endif