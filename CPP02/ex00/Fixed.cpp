#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	fixed_part = 0;
}
// copy constructor
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	this->fixed_part = other.getRawBits();
}
Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_part = c.getRawBits();
	return *this;
}
Fixed::~Fixed()
{
	std::cout<<"Destructor called \n";
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(fixed_part);
}
void Fixed::setRawBits( int const raw )
{
	fixed_part = raw;
}