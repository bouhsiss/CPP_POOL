#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

struct Data {
	std::string content;
	std::string Type;
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif