/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:38:12 by enena             #+#    #+#             */
/*   Updated: 2022/01/19 23:04:07 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>
# include <iostream>
# include <iomanip>
# define COUNT_COMPLAINT	4

typedef enum e_level
{
	debug,
	info,
	warning,
	error,
	unexpected
}	t_level;

class Karen
{
private:
	void		_init(void);
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	void		problem(void);
	void		(Karen::*complaint[COUNT_COMPLAINT + 1])(void);
	void		(Karen::*selComlaint)(void);
	std::string	complainLevels[COUNT_COMPLAINT];
	t_level		_filter;
public:
	Karen(void);
	Karen(std::string input);
	~Karen(void);

	void		complain(std::string level);
	void		setFilter(std::string input);
	t_level		getFilter(void);
};

#endif
