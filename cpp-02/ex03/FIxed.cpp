#include"Fixed.hpp"

const int Fixed::FractionalBits = 8;

/* ------------ orthodox canonical form --------- */

Fixed::Fixed(){
	this->FixedValue = 0;
}


Fixed& Fixed::operator=(const Fixed& FixedObject){
	this->FixedValue = FixedObject.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed& FixedObject){
	*this = FixedObject;
}

Fixed::~Fixed(){}

/*--------- parametrized constructors  ----------*/

Fixed::Fixed(const int IntValue){
	this->FixedValue = IntValue  << this->FractionalBits;
}

Fixed::Fixed(const float FloatValue){
	this->FixedValue = roundf(FloatValue * (1 << FractionalBits));
}

/* --------- public member functions (converters) ------- */

int Fixed::toInt(void) const{
	return(roundf(this->FixedValue / (1 << FractionalBits)));
}

float Fixed::toFloat(void) const{
		return((float)this->FixedValue / (float)(1 << FractionalBits));
}

/* -------- accessors -------- */

int	Fixed::getRawBits(void) const{
	return(this->FixedValue);
}

void Fixed::setRawBits(int const raw){
	this->FixedValue = raw;
}

/* -------- comparison operators ----------*/ 

bool Fixed::operator>(const Fixed& FixedObject) const{
	return(this->FixedValue > FixedObject.FixedValue);
}

bool Fixed::operator<(const Fixed& FixedObject) const{
	return(this->FixedValue < FixedObject.FixedValue);
}

bool Fixed::operator>=(const Fixed& FixedObject) const{
	return(this->FixedValue >= FixedObject.FixedValue);
}

bool Fixed::operator<=(const Fixed& FixedObject) const{
	return(this->FixedValue <= FixedObject.FixedValue);
}

bool Fixed::operator==(const Fixed& FixedObject) const{
	return(this->FixedValue == FixedObject.FixedValue);
}

bool Fixed::operator!=(const Fixed& FixedObject) const{
	return(this->FixedValue != FixedObject.FixedValue);
}

/* ----- arithmetic operators ---- */

Fixed Fixed::operator+(const Fixed& FixedObject) const{
	Fixed ret;
	ret.FixedValue = this->FixedValue + FixedObject.FixedValue;
	return(ret);
}

Fixed Fixed::operator-(const Fixed& FixedObject) const{
	Fixed ret;
	ret.FixedValue = this->FixedValue - FixedObject.FixedValue;
	return(ret);
}


Fixed Fixed::operator*(const Fixed& FixedObject) const{
	Fixed ret(this->toFloat() * FixedObject.toFloat());
	return(ret);
}

Fixed Fixed::operator/(const Fixed& FixedObject) const{
	Fixed ret(this->toFloat() / FixedObject.toFloat());
	return(ret);
}

/* ------ increment/decrement operators -------*/

Fixed& Fixed::operator++(){
	this->FixedValue++;
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed ret = *this;
	++this->FixedValue;
	return(ret);
}


Fixed& Fixed::operator--(){
	this->FixedValue--;
	return(*this);
}

Fixed Fixed::operator--(int){
	Fixed ret = *this;
	--this->FixedValue;
	return(ret);
}

/* ----- insertion operator ----- */

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
	os << obj.toFloat();
	return(os);
}
