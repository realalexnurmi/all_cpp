/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulohl <pohl@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:56:19 by paulohl           #+#    #+#             */
/*   Updated: 2021/07/21 12:53:57 by paulohl          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

CppSed::CppSed( void )
{
}

CppSed::~CppSed( void )
{
}

bool	CppSed::setFile( std::string newFile )
{
	if (this->inputFileStream.is_open())
		this->inputFileStream.close();
	if (newFile == "")
	{
		std::cerr << "The file to open can't be an empty string" << std::endl;
		return (false);
	}
	this->inputFileStream.open(newFile);
	this->fileName = newFile;
	std::cout << "Input file set to " << newFile << std::endl;
	return (true);
}

bool	CppSed::replace(std::string stringToReplace, std::string replacement)
{
	std::string	result;
	size_t		toReplaceLen = stringToReplace.length();

	if (stringToReplace == "" || replacement == "")
	{
		std::cerr << "Strings can't be empty" << std::endl;
		return (false);
	}
	result.assign(std::istreambuf_iterator<char>(this->inputFileStream),
			std::istreambuf_iterator<char>());
	for (size_t pos = 0; pos < result.length(); pos++)
	{
		if (result.compare(pos, toReplaceLen, stringToReplace) == 0)
		{
			result.erase(pos, toReplaceLen);
			result.insert(pos, replacement);
			/* result.replace(pos, toReplaceLen, replacement); */
		}
	}
	this->outputToFile(result);
	return (true);
}

void	CppSed::outputToFile( std::string fileContent )
{
	std::ofstream	outputFileStream;
	std::string		outputFileName = this->fileName;

	std::transform(outputFileName.begin(), outputFileName.end(),
			outputFileName.begin(), ::toupper);
	outputFileName += ".replace";
	outputFileStream.open(outputFileName);
	std::cout << "Writing modified content to file \"" << outputFileName
		<< "\"" << std::endl;
	outputFileStream << fileContent;
}
