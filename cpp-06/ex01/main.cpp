#include "serialization.hpp"

int main() {
	Data *Datatest = new Data;
	Data *Newdata = new Data;
	uintptr_t raw;
	Datatest->content =  "lorem ipsum";
	Datatest->Type = "random content";
	std::cout << "Data content before serialization:" << Datatest->content << std::endl;
	raw = serialize(Datatest);
	Newdata = deserialize(raw);
	std::cout << "data content after serialization :" << Newdata->content << std::endl;
}