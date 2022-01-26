/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:57:28 by enena             #+#    #+#             */
/*   Updated: 2022/01/24 22:40:51 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
private:
	static const unsigned int	_countIdeas = 100;
	unsigned int				_currIdea;
	unsigned int				getNumCurrIdea(void) const;
	void						setNumCurrIdea(const unsigned int currIdea);
public:
	Brain(void);
	Brain(const Brain& init);
	~Brain(void);

	Brain&						operator=(const Brain& other);
	void						addIdea(const std::string& idea);
	void						thinkALot(const std::string& baseIdea);
	void						thinkNext(void);

	std::string					ideas[Brain::_countIdeas];
};



#endif
