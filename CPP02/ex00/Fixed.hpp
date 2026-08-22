#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int fixed_part;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator=(const Fixed &c);
        ~Fixed();
		int	 getRawBits( void ) const;
		void setRawBits( int const raw);
        
};

#endif