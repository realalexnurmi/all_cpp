/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:53:19 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 19:54:22 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(void);
	MutantStack(const MutantStack<T>& init);
	~MutantStack(void);

	MutantStack<T>&		operator=(const MutantStack<T>& other);

	iterator			begin(void);
	iterator			end(void);
};

#endif
