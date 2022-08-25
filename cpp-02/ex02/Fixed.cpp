#include"Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->FixedValue = 0;
}

Fixed::Fixed(const int IntValue){
	this->FixedValue = IntValue  << this->FractionalBits;
}

Fixed::Fixed(const float FloatValue){
	this->FixedValue = roundf(FloatValue * (1 << FractionalBits));
}

Fixed& Fixed::operator=(const Fixed& FixedObject){
	std::cout << "Copy assignment operator called" << std::endl;
	this->FixedValue = FixedObject.getRawBits();
	return *this;
}


Fixed::Fixed(const Fixed& FixedObject){
	std::cout << "Copy constructor called" << std::endl;
	*this = FixedObject;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const{
	return(roundf(this->FixedValue / (1 << FractionalBits)));
}

float Fixed::toFloat(void) const{
		return((float)this->FixedValue / (float)(1 << FractionalBits));
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->FixedValue);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->FixedValue = raw;
}

bool Fixed::operator>(const Fixed& FixedObject){
	return(this->FixedValue > FixedObject.FixedValue);
}

bool Fixed::operator<(const Fixed& FixedObject){
	return(this->FixedValue < FixedObject.FixedValue);
}

bool Fixed::operator>=(const Fixed& FixedObject){
	return(this->FixedValue >= FixedObject.FixedValue);
}

bool Fixed::operator<=(const Fixed& FixedObject){
	return(this->FixedValue <= FixedObject.FixedValue);
}

bool Fixed::operator==(const Fixed& FixedObject){
	return(this->FixedValue == FixedObject.FixedValue);
}

bool Fixed::operator!=(const Fixed& FixedObject){
	return(this->FixedValue != FixedObject.FixedValue);
}

Fixed Fixed::operator+(const Fixed& FixedObject){
	Fixed ret;
	ret.FixedValue = this->FixedValue + FixedObject.FixedValue;
	return(ret);
}

Fixed Fixed::operator-(const Fixed& FixedObject){
	Fixed ret;
	ret.FixedValue = this->FixedValue - FixedObject.FixedValue;
	return(ret);
}

Fixed Fixed::operator*(const Fixed& FixedObject){
	Fixed ret;
	ret.FixedValue = this->FixedValue * FixedObject.FixedValue;
	return(ret.toFloat());
}

Fixed Fixed::operator/(const Fixed& FixedObject){
	Fixed ret;
	ret.FixedValue = this->FixedValue / FixedObject.FixedValue;
	return(ret.toFloat());
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return(os);
}
