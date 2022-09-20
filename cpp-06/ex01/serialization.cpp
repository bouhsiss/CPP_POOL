#include "serialization.hpp"

uintptr_t serialize(Data *ptr) {
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return(ret);
}

Data* deserialize(uintptr_t raw) {
	Data *ret = reinterpret_cast<Data *>(raw);
	return(ret);
}