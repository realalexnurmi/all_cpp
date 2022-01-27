/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:43:47 by enena             #+#    #+#             */
/*   Updated: 2022/01/27 00:50:51 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <ctime>

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
	RobotomyRequestForm(void);

public:
	RobotomyRequestForm(const RobotomyRequestForm& init);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();
	void		action(void) const;
};

#endif
