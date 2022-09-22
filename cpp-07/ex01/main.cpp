#include"iter.hpp"

// void decrement(int &i) {
// 	i--;
// }

// void decrement(float &i) {
// 	i--;
// }

// void StrToUpper(std::string &str) {
// 	for (int i = 0; (unsigned)i < str.length(); i++)
// 		str[i] = std::toupper(str[i]);
// }

// void CharToUpper(char &c) {c = toupper(c);}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	std::cout << "===== testing with int =====" << std::endl << std::endl;
	int arr[6] = {1, 2, 3, 4, 5, 6};
	iter(arr, 6, print);

	std::cout << "===== testing with float =====" << std::endl;
	float arr_1[3] = {1.2f, 2.7f, 3.55f};
	iter(arr_1, 3, print);

	std::cout << "===== testing with strings =====" << std::endl << std::endl;
	std::string arr_2[4] = {"hello", "this", "is", "a test"};
	iter(arr_2, 4, print);
	

	std::cout << "====== testing with characters ======" << std::endl << std::endl;
	
	char arr_3[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	iter(arr_3, 6, print);
	
}
