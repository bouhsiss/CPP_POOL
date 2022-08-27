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
		Fixed(const Fixed& FixedObject);
		Fixed& operator=(const Fixed& FixedObject);
		~Fixed();
		Fixed(const int IntValue);
		Fixed(const float FloatValue);	
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		bool operator>(const Fixed&) const;
		bool operator<(const Fixed&) const;
		bool operator>=(const Fixed&) const;
		bool operator<=(const Fixed&) const;
		bool operator==(const Fixed&) const;
		bool operator!=(const Fixed&) const;
		Fixed operator+(const Fixed&) const;
		Fixed operator-(const Fixed&) const;
		Fixed operator*(const Fixed&) const;
		Fixed operator/(const Fixed&) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static const Fixed& min(Fixed& a, Fixed& b){return( a.FixedValue > b.FixedValue) ? b : a;};
		static const Fixed& min(const Fixed& a, const Fixed& b){return( a.FixedValue > b.FixedValue) ? b : a;};
		static const Fixed& max(Fixed& a, Fixed& b){return( a.FixedValue < b.FixedValue) ? b : a;};
		static const Fixed& max(const Fixed& a, const Fixed& b){return( a.FixedValue < b.FixedValue) ? b : a;};
		friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif
