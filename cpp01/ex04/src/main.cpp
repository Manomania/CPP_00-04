/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximart <maximart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:04:10 by maximart          #+#    #+#             */
/*   Updated: 2025/06/20 19:41:00 by maximart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replaceLine(const std::string &line, const size_t pos, const size_t len, const std::string &str)
{
	std::string	result;

	for (size_t i = 0; i < line.length(); i++)
	{
		if (i == pos)
		{
			result += str;
			i += len - 1;
		}
		else
			result += line[i];
	}
	return (result);
}

std::string	getContent(std::string line, const std::string &s1, const std::string &s2)
{
	size_t	startPos = 0;
	while ((startPos = line.find(s1, startPos)) != std::string::npos)
	{
		line = replaceLine(line, startPos, s1.length(), s2);
		startPos += s2.length();
	}
	return (line);
}

bool	checkError(const int argc, char **argv, const std::ifstream &file)
{
	const std::string	s2 = argv[3];

	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <find> <replace>" << std::endl;
		return (true);
	}
	if (!file.is_open())
	{
		std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
		return (true);
	}
	if (s2.empty())
		return (true);
	return (false);
}

int main(int argc, char **argv)
{
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		line;
	std::ifstream	myFile(argv[1]);

	if (checkError(argc, argv, myFile))
		return (1);

	std::string		outputName = std::string(argv[1]) + ".replaced";
	std::ofstream	myFileReplaced(outputName.c_str());

	while (getline(myFile, line))
	{
		line = getContent(line, s1, s2);
		myFileReplaced << line;
		if (myFile.peek() != EOF)
			myFileReplaced << std::endl;
	}
	myFile.close();
	myFileReplaced.close();
	return (0);
}
