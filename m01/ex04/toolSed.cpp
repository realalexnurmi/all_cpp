/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolSed.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:20:19 by enena             #+#    #+#             */
/*   Updated: 2022/01/16 13:04:35 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "toolSed.hpp"

int	errorReact(const t_status status)
{
	if (status != success)
		std::cout << "Error:" << errorMessage[status] << std::endl
			<< errorMessage[correctUsage] << std::endl;
	return status;
}

std::string	formName(char *str)
{
	std::string ret(str);

	for (size_t j = 0; j < ret.length(); j++)
		ret[j] = (char)std::toupper(str[j]);
	ret.append(".replace");
	return ret;
}

int	processFile(t_file& file, const std::string in_name,
		const std::string out_name)
{
	int	ret;

	ret = success;
	if (in_name == "")
		ret = errorReact(emptyFileName);
	if (ret == success)
	{
		if (file.in.is_open())
			file.in.close();
		if (file.out.is_open())
			file.in.close();
	}
	if (ret == success)
	{
		file.in.open(in_name, std::ifstream::in);
		file.out.open(out_name, std::ofstream::out | std::ofstream::trunc);
		if (file.in.fail() || file.out.fail())
			ret = errorReact(openFileError);
	}
	return ret;
}

int	replaceString(t_file& file, const std::string toReplace,
		const std::string replacement)
{
	int			ret;
	std::string	res;
	size_t		lenToReplace;

	ret = success;
	lenToReplace = toReplace.length();
	if (toReplace == "" || replacement == "")
		ret = errorReact(emptyStrings);
	if (ret == success)
	{
		res.assign(std::istreambuf_iterator<char>(file.in),
				std::istreambuf_iterator<char>());
		for (size_t pos = 0; pos < res.length(); pos++)
		{
			if (res.compare(pos, lenToReplace, toReplace) == 0)
			{
				res.erase(pos, lenToReplace);
				res.insert(pos, replacement);
				pos += replacement.length();
			}
		}
	}
	file.out << res;
	return ret;
}
