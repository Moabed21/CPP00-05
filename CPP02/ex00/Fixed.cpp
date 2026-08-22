#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	fixed_part = 0;
}
// copy constructor
Fixed::Fixed(const Fixed &fixed)
{
	std::cout<<"Copy constructor called\n";
	this->fixed_part = fixed.fixed_part;
}
Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout<<"Copy assignment operator called\n";
    if (this != &c)
    {
        fixed_part = c.fixed_part;
    }
    return *this;
}
Fixed::~Fixed()
{
	std::cout<<"Destructor called \n";
}
int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called\n";
	return(fixed_part);
}
void Fixed::setRawBits( int const raw )
{
	fixed_part = raw;
}