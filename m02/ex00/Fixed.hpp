/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:19:56 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 02:40:52 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int 				_value;
	static const int	bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed& fixed);
	~Fixed(void);
	
	Fixed&	operator=(const Fixed& fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
