/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:26:03 by enena             #+#    #+#             */
/*   Updated: 2022/01/29 15:37:11 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A : public Base
{
private:
	std::string	secret;
public:
	A(void);
	~A(void);

	const std::string&	whoIm(void) const;
};

std::ostream&			operator<<(std::ostream& out, const A& src);

#endif
