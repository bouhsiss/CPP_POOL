#include"Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed var1;
	Fixed var2;
	Fixed var3;
	Fixed one(1);
	Fixed zero(0);

	var1 = ((b.getY() - c.getY())*(point.getX() - c.getX()) + (c.getX() - b.getX())*(point.getY() - c.getY())) / ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY()));
	var2 = ((c.getY() - a.getY())*(point.getX() - c.getX()) + (a.getX() - c.getX())*(point.getY() - c.getY())) / ((b.getY() - c.getY())*(a.getX() - c.getX()) + (c.getX() - b.getX())*(a.getY() - c.getY()));
	var3 = one - (var1 + var2);
	return( zero<=var1 && var1<=one && zero<=var2 && var2<=one && zero<=var3 && var3<=one);
}