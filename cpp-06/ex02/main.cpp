#include <iostream>
class Base {
	public :
		virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void) {
	srand(time(NULL));
	int RandomNb = 1 + rand() % 3;
	if(RandomNb == 1)
		return(new A);
	else if (RandomNb == 2)
		return(new B);
	else
		return(new C);

}

void identify(Base *p) {
	std::cout << "the type of the object pointed by p is : ";
	if(dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown" << std::endl;
}

void identify(Base &p) {
	std::cout << "the type of the object pointed by p is : ";
	try {
		A &instance_a = dynamic_cast<A&>(p);
		(void)instance_a;
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception &e) {}
	try {
		B &instance_b = dynamic_cast<B&>(p);
		(void)instance_b;
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception &e) {}
	try {
		C &instance_c = dynamic_cast<C&>(p);
		(void)instance_c;
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception &e) {
		std::cout << "unknown" << std::endl;
	}
}

class test : public Base{};

int main () {
	std::cout << "========== Identifying a random instance of base class : ========" << std::endl;

	Base *random_instance = generate();
	std::cout << "identifying by pointer -->" << std::endl;
	identify(random_instance);
	std::cout << "identifying by reference -->" << std::endl;
	identify((*random_instance));

	std::cout << "<----------------------------------------------------------------->" << std::endl;
	std::cout << "========== Identifying an unknown class : =============" << std::endl;

	test *idk = new test;
	std::cout << "identifying by pointer -->" << std::endl;
	identify(idk);
	std::cout << "identifying by reference -->" << std::endl;
	identify((*idk));
}