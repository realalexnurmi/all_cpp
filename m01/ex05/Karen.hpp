/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:38:12 by enena             #+#    #+#             */
/*   Updated: 2022/01/19 21:12:44 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	(Karen::*complaint[4])(void);
	std::string complainLevels[4];
public:
	Karen(void);
	~Karen(void);

	void complain(std::string level);
};

#endif
