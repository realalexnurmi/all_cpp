/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:49:01 by pohl              #+#    #+#             */
/*   Updated: 2021/10/25 15:09:45 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

bool		ft_isdigit(char c);
void		print_help( void );
bool		canConvertToInt( double number );
bool		canConvertToFloat( double number );
const char	*printDotZero( double number );

#endif
