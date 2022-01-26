/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 08:14:07 by enena             #+#    #+#             */
/*   Updated: 2022/01/26 08:17:20 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string				_target;

	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm& init);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

public:
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
	void					action(void) const;


};

#endif
