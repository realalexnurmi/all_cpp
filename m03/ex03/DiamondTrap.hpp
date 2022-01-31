/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:25:05 by enena             #+#    #+#             */
/*   Updated: 2022/01/30 19:44:11 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap :  public FragTrap, public ScavTrap
{
private:
	std::string		_name;
public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap& init);
	DiamondTrap(const std::string& name);
	~DiamondTrap(void);

	DiamondTrap&	operator=(const DiamondTrap& assign);

	std::string		getName(void) const;
	void			setName(const std::string& name);
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			whoAmI(void);
};

#endif
