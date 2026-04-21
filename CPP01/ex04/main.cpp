/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:04:43 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 21:04:43 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

static void find_and_replace(std::string to_find, std::string to_replace, 
					std::ifstream &inputFile, std::ofstream &outputFile)
{
	std::string 			line;
	std::string::size_type	found;
	size_t					end_last_found;
	std::string				replaced_line;

	end_last_found = 0;
	while(std::getline(inputFile, line))
	{
		replaced_line.clear();
		end_last_found = 0;
		found = line.find(to_find);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				replaced_line.append(line, end_last_found, found - end_last_found);
				replaced_line += to_replace;
				end_last_found = found + to_find.length();
				found = line.find(to_find, end_last_found);
				if (found == std::string::npos)
					replaced_line.append(line, end_last_found, line.length());
			}
		}
		else
			replaced_line = line;
		if (!inputFile.eof())
			outputFile << replaced_line << std::endl;
		else
			outputFile << replaced_line;
	}
}

int	main(int ac, char **av)
{
	std::string		inputFileName;
	std::string		outputFileName;
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string 	to_find;
	std::string 	to_replace;

	if (ac != 4)
		return (std::cout << "Argument format: ./gnlpp <filename> <find> <replace>" << std::endl, 1);
	inputFileName = av[1];
	to_find = av[2];
	to_replace = av[3];
	outputFileName += inputFileName + ".replace";

	inputFile.open(inputFileName.c_str(), std::fstream::in);
	outputFile.open(outputFileName.c_str(), std::fstream::out);
	if (!inputFile || !outputFile)
	{
		if (!inputFile)
        	std::cerr << "Wrong input file bruh" << std::endl;
		if (!outputFile)
        	std::cerr << "Wrong output file bruh" << std::endl;
		if (inputFile)
			inputFile.close();
		if (outputFile)
			outputFile.close();
        return (1);
	}
	find_and_replace(to_find, to_replace, inputFile, outputFile);
	inputFile.close();
	outputFile.close();
}
