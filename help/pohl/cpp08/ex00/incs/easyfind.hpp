/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <pohl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:11:25 by marvin            #+#    #+#             */
/*   Updated: 2021/10/31 19:41:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template<typename T>
typename T::iterator	easyfind( T &container, int goal )
{
	typename T::iterator	result = find(container.begin(), container.end(), goal);

	if (result == container.end())
		return container.end();
	return result;
}
