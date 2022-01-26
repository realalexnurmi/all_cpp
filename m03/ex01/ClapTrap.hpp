/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 07:44:41 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 17:58:46 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	void			setHitPoints(const unsigned int hitPoints);
	void			setEnergyPoints(const unsigned int energyPoints);
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap& init);
	ClapTrap(const std::string& name);
	virtual ~ClapTrap(void);

	ClapTrap&		operator=(const ClapTrap& assign);

	std::string		getName(void) const;
	void			setName(const std::string& name);
	unsigned int	getAttackDamage(void) const;
	void			setAttackDamage(const unsigned int attackDamage);
	virtual void	attack(const std::string& target);
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);
};

#endif
