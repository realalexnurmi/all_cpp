/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 07:09:21 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 07:10:51 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string	_target;
public:
	ShrubberyCreationForm(void);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string &target);
	void					action() const;


							
							ShrubberyCreationForm(const ShrubberyCreationForm &toCopy) {(void)toCopy;}
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &toCopy) {(void)toCopy; return(*this);}
};

#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
