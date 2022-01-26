/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:19:56 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 03:28:44 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int 				_value;
	static const int	bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	Fixed(const int inum);
	Fixed(const float fnum);
	~Fixed(void);
	
	Fixed&				operator=(const Fixed& fixed);
	bool				operator>(const Fixed& fixed) const;
	bool				operator<(const Fixed& fixed) const;
	bool				operator>=(const Fixed& fixed) const;
	bool				operator<=(const Fixed& fixed) const;
	bool				operator==(const Fixed& fixed) const;
	bool				operator!=(const Fixed& fixed) const;
	Fixed				operator+(const Fixed& fixed) const;
	Fixed				operator-(const Fixed& fixed) const;
	Fixed				operator*(const Fixed& fixed) const;
	Fixed				operator/(const Fixed& fixed) const;
	Fixed&				operator++();
	Fixed				operator++(int);
	Fixed&				operator--();
	Fixed				operator--(int);

	static Fixed&		min(Fixed& obj1, Fixed& obj2);
	static const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
	static Fixed&		max(Fixed& obj1, Fixed& obj2);
	static const Fixed&	max(const Fixed& obj1, const Fixed& obj2);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream&			operator<<(std::ostream& out, Fixed const& fixed);

#endif
