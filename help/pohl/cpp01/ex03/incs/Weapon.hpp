/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:41:50 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 18:54:37 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string&	getType( void ) const;
	bool				setType( const std::string& newType );

private:

	std::string type;

};

#endif
