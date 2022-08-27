#include"Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float X, const float Y) : x(X), y(Y) {}

Point& Point::operator=(const Point& PointObject){
	(void)PointObject;
	return(*this);
}

Point::Point(const Point& PointObject): x(PointObject.getX()), y(PointObject.getY()) {}

Point::~Point(){}

const Fixed& Point::getX(void) const{
	return(x);
}

const Fixed& Point::getY(void) const{
	return(y);
}
