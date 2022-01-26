/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolSed.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:20:16 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 12:44:44 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLSED_HPP
# define TOOLSED_HPP
# include <string>
# include <iostream>
# include <fstream>

typedef enum	e_status
{
	success = 0,
	wrongCountArg,
	emptyFileName,
	emptyStrings,
	openFileError,
	correctUsage,
	countStatus
}	t_status;

typedef struct s_file
{
	std::ifstream	in;
	std::ofstream	out;
}	t_file;

static std::string	errorMessage[countStatus] = {
	"SUCCESS",
	"Wrong count of arguments.",
	"Entered name of file is empty.",
	"String to replace and replacement cannot be empty.",
	"Trouble with open input or output file.",
	"Correct usage: ./ft_sed [pathToFile/]filename stringToReplace replacement"
};

int			errorReact(const t_status status);
std::string	formName(char *str);
int			processFile(t_file& file, const std::string in_filename,
				const std::string out_filename);
int			replaceString(t_file& file, const std::string toReplace,
				const std::string replacement);

#endif
