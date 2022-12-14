#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>


class Fixed{
	private :
		static const int FractionalBits;
		int FixedValue;
	public :
		Fixed();
		Fixed(const Fixed& FixedObject);
		Fixed& operator=(const Fixed& FixedObject);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif