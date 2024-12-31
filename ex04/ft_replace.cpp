/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:56:53 by izperez           #+#    #+#             */
/*   Updated: 2024/12/31 11:36:12 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool	ft_error(std::string &filename, std::string &s1, std::string &s2)
{
	std::ifstream inputFile(filename);

	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cerr << "error: fields cannot be empty" << std::endl;
		return (false);
	}
	if (!inputFile.is_open())
	{
		std::cerr << "error: input file cannot be open!" << std::endl;
		return (false);
	}
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "error: output file cannot be created!" << std::endl;
		inputFile.close();
		return (false);	
	}
	return (true);
}

std::ofstream	ft_replace(std::string &filename, std::string &s1, std::string &s2)
{
	std::ifstream inputFile(filename);
	std::ofstream outputFile(filename + ".replace");
	ft_error(filename, s1, s2);
	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outputFile << line << '\n';
	}
	inputFile.close();
	outputFile.close();
	return (outputFile);
}
