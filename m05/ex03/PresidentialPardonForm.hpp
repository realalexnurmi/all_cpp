/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:14:07 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 00:42:33 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
	PresidentialPardonForm(void);

public:
	PresidentialPardonForm(const PresidentialPardonForm& init);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
	void		action(void) const;
};

#endif
