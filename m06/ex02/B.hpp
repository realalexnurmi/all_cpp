/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:26:18 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 15:39:06 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B : public Base
{
private:
	std::string	secret;
public:
	B(void);
	~B(void);

	const std::string&	whoIm(void) const;
};

std::ostream&			operator<<(std::ostream& out, const B& src);

#endif
