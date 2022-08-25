#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed{
	private :
		static const int FractionalBits;
		int FixedValue;
	public :
		Fixed();
		Fixed(const int IntValue);
		Fixed(const float FloatValue);	
		Fixed(const Fixed& FixedObject);
		Fixed& operator=(const Fixed& FixedObject);
		~Fixed();
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		bool operator>(const Fixed&);
		bool operator<(const Fixed&);
		bool operator>=(const Fixed&);
		bool operator<=(const Fixed&);
		bool operator==(const Fixed&);
		bool operator!=(const Fixed&);
		Fixed operator+(const Fixed&);
		Fixed operator-(const Fixed&);
		Fixed operator*(const Fixed&);
		Fixed operator/(const Fixed&);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif
