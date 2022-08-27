#ifndef POINT_HPP
#define POINT_HPP

#include"Fixed.hpp"

class Point{
	private :
		const Fixed x;
		const Fixed y;
	public :
		Point();
		Point(const float, const float);
		Point(const Point&);
		Point& operator=(const Point&);
		~Point();
		const Fixed& getX(void) const;
		const Fixed& getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
