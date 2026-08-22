#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedvalue;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &c);

        Fixed(const int num);
        Fixed(const float num);
        float toFloat( void ) const;
        int toInt( void ) const;
        
        ~Fixed();
		int	 getRawBits( void ) const;
		void setRawBits( int const raw);
        
    };
std::ostream    &operator<<(std::ostream &o, const Fixed &obj);

#endif