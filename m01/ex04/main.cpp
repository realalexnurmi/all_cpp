/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 07:52:11 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 12:36:15 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolSed.hpp"

int	main(int argc, char **argv)
{
	int		ret;
	t_file	fileSt;

	ret = success;
	if (argc != 4)
		ret = errorReact(wrongCountArg);
	if (ret == success)
		ret = processFile(fileSt, std::string(argv[1]),
			std::string(formName(argv[1])));
	if (ret == success)
		ret = replaceString(fileSt, std::string(argv[2]), std::string(argv[3]));
	fileSt.in.close();
	fileSt.out.close();
	if (ret == success)
		std::cout << "Done!" << std::endl;
	return ret;
}
