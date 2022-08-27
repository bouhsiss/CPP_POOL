#include"Point.hpp"

int main(){
	Point a(0, 1);
	Point b(-1, 0);
	Point c(1, -1);
	Point point(0,-6);
	Point point2(0, 0);

	if(bsp(a, b, c, point))
		std::cout << "the point belongs" << std::endl;
	else
		std::cout << "the point doesn't belong" << std::endl;

	if(bsp(a, b, c, point2))
		std::cout << "the point belongs" << std::endl;
	else
		std::cout << "the point doesn't belong" << std::endl;

}