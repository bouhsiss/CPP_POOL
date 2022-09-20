#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void iter(T *arr, int length, void (*funct)(T &element)) {
	for (int i = 0; i < length; i++)
		funct(arr[i]);
} 

#endif