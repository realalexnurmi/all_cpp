/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:58:32 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 17:06:11 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{

private:

	static const int	numberOfIdeas = 100;

public:

	Brain( void );
	Brain( const Brain &src );
	~Brain( void );

	Brain	&operator=( const Brain &other );

	std::string		ideas[Brain::numberOfIdeas];

};

#endif
