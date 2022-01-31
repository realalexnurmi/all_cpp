/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:11:50 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 18:18:05 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <stdexcept>

class NoFoundException : public std::exception
{
	virtual const char*	what() const throw()
	{
		return "Cannot find goal!";
	}
};

template<typename T>
void	displayIter(T it, T end)
{
	if (it != end)
		std::cout << "Iterator: " << *it << std::endl;
	else
	{
		std::cout << "Iterator reach end." << std::endl;
		throw NoFoundException();
	}
}

template<typename T>
typename T::iterator	easyfind(T& container, int goal)
{
	typename T::iterator	rez;
	
	rez = find(container.begin(), container.end(), goal);

	displayIter(rez, container.end());
	return rez;
}

#endif
