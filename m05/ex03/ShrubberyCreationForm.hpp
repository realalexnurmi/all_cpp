/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 07:09:21 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 00:51:21 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string	_target;
	ShrubberyCreationForm(void);

public:
	ShrubberyCreationForm(const ShrubberyCreationForm& init);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	void		action(void) const;
};

#endif
