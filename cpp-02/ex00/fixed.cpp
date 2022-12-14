#include"fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->FixedValue = 0;
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

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->FixedValue);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->FixedValue = raw;
}