#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called\n";
	fixedvalue = 0;
}
// copy constructor
Fixed::Fixed(const Fixed &fixed)
{
	std::cout<<"Copy constructor called\n";
	this->fixedvalue = fixed.fixedvalue;
}
Fixed &Fixed::operator=(const Fixed &c)
{
	std::cout<<"Copy assignment operator called\n";
	this->fixedvalue = c.fixedvalue;
	return (*this);
}
Fixed::~Fixed()
{
	std::cout<<"Destructor called \n";
}
int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called\n";
	return(fixedvalue >> fraction);
}
void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called\n";
	fixedvalue = raw;
}

Fixed::Fixed(const int num)
{
	// converting integer means left shift by number of fractions
    std::cout << "Int constructor called\n";
	fixedvalue = num << fraction;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called\n";
	fixedvalue = roundf(num * (1 << fraction));
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
// https://www.rfwireless-world.com/calculators/floating-point-to-fixed-point-converter
float Fixed::toFloat( void ) const
{
    return ((float)fixedvalue / (float)(1 << fraction));
}

int Fixed::toInt( void ) const
{
    return (fixedvalue >> fraction);
}

std::ostream    &operator<<(std::ostream &o, const Fixed &obj)
{
	o << obj.toFloat();
	return (o);
}

