#include "Fixed.hpp"

Fixed::Fixed()
{
	fixedvalue = 0;
}
// copy constructor
Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}
Fixed &Fixed::operator=(const Fixed &c)
{
	if (this != &c)
		this->fixedvalue = c.fixedvalue;
	return (*this);
}
Fixed::~Fixed()
{
}
int Fixed::getRawBits( void ) const
{
	return (this->fixedvalue);
}
void Fixed::setRawBits( int const raw )
{
	this->fixedvalue = raw;
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

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed temp;
	temp.setRawBits(this->fixedvalue + other.fixedvalue);
	return temp;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed temp;
	temp.setRawBits(this->fixedvalue - other.fixedvalue);
	return temp;
}

// Fixed point multiplication: (A * B) >> 8
// Cast to long long to prevent 32-bit integer overflow before shifting
Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed temp;
	temp.setRawBits(((long long)this->fixedvalue * (long long)other.fixedvalue) >> fraction);
	return temp;
}

// Fixed point division: ((long long)A << 8) / B
// Left shift first to maintain precision, cast to long long to prevent overflow
Fixed Fixed::operator/(const Fixed &other) const
{
	if (other.fixedvalue == 0)
	{
		std::cerr << "Error: Division by zero\n";
		return Fixed(0);
	}
	Fixed temp;
	temp.setRawBits(((long long)this->fixedvalue << fraction) / other.fixedvalue);
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
	return((a < b) ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return((a > b) ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return((a > b) ? a : b);
}
