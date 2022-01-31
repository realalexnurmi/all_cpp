/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:40:20 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 16:33:19 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C : public Base
{
private:
	std::string	secret;
public:
	C(void);
	~C(void);

	const std::string&	whoIm(void) const;
};

std::ostream&			operator<<(std::ostream& out, const C& src);

#endif
