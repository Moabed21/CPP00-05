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
		int	 getRawBits(void) const;
		void setRawBits(int const raw);

		bool operator>(const Fixed &c) const;
		bool operator<(const Fixed &c) const;
		bool operator>=(const Fixed &c) const;
		bool operator<=(const Fixed &c) const;
		bool operator==(const Fixed &c) const;
		bool operator!=(const Fixed &c) const;

		Fixed operator+(const Fixed &c);
		Fixed operator-(const Fixed &c);
		Fixed operator*(const Fixed &c);
		Fixed operator/(const Fixed &c);

		// pre, increment then store the current
		Fixed &operator++();
		Fixed &operator--();
		// post, store the previous objecy state then increment
		Fixed operator++(int);
		Fixed operator--(int);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);

		~Fixed();
		
	};

std::ostream    &operator<<(std::ostream &o, const Fixed &obj);

#endif