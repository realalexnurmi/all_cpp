/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CppSed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:56:21 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/19 16:27:34 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <fstream>

class CppSed
{

public:

	CppSed( void );
	~CppSed( void );

	bool	setFile( std::string newFile );

	bool	replace( std::string stringToReplace, std::string replacement );
	void	outputToFile( std::string fileContent );

private:

	std::string		stringToReplace;
	std::string		replacement;
	std::string		fileName;
	std::ifstream	inputFileStream;

};

#endif
