#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	fixedvalue = 0;
}
// copy constructor
Fixed::Fixed(const Fixed &fixed)
{
	this->fixedvalue = fixed.fixedvalue;
}
Fixed &Fixed::operator=(const Fixed &c)
{
	this->fixedvalue = c.fixedvalue;
	return (*this);
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits( void ) const
{
	return(fixedvalue >> fraction);
}
void Fixed::setRawBits( int const raw )
{
	fixedvalue = raw;
}

Fixed::Fixed(const int num)
{
	// converting integer means left shift by number of fractions
	fixedvalue = num << fraction;
}

Fixed::Fixed(const float num)
{
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

bool Fixed::operator>(const Fixed &c) const
{
	return (this->fixedvalue > c.fixedvalue);
}
bool Fixed::operator<(const Fixed &c) const
{
	return (this->fixedvalue < c.fixedvalue);
}

bool Fixed::operator>=(const Fixed &c) const
{
	return (this->fixedvalue >= c.fixedvalue);
}
bool Fixed::operator<=(const Fixed &c) const
{
	return (this->fixedvalue <= c.fixedvalue);
}

bool Fixed::operator==(const Fixed &c) const
{
	return (this->fixedvalue == c.fixedvalue);
}
bool Fixed::operator!=(const Fixed &c) const
{
	return (this->fixedvalue != c.fixedvalue);
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed temp;
	temp.fixedvalue = this->fixedvalue + other.fixedvalue;
	return temp;

}
Fixed Fixed::operator-(const Fixed &other)
{
	Fixed temp;
	temp.fixedvalue = this->fixedvalue - other.fixedvalue;
	return temp;

}
// we shifted to the right by fraction cuz we store every fixedpoint number as
// number * 256, to get the real value we shift
Fixed Fixed::operator*(const Fixed &other)
{
	Fixed temp;
	temp.fixedvalue = (this->fixedvalue * other.fixedvalue)>> fraction;
	return temp;
}
// check
Fixed Fixed::operator/(const Fixed &other)
{
	Fixed temp;
	temp.fixedvalue = (this->fixedvalue / other.fixedvalue)<<fraction;
	return temp;
}


Fixed &Fixed::operator++()
{
	++this->fixedvalue;
	return(*this);
}
Fixed &Fixed::operator--()
{
	--this->fixedvalue;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed bef = *this;
	this->fixedvalue++;
	return(bef);
}
Fixed Fixed::operator--(int)
{
	Fixed bef = *this;
	this->fixedvalue--;
	return(bef);
}

//static keyword only used inside class definition
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return((a < b) ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return((a > b) ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return((a > b) ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return((a > b) ? a : b);
}
