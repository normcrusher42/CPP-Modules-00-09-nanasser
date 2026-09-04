/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:10:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/04 21:43:15 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << GRAY "ScalarConverter default constructor called" RESET << std::endl;
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
	std::cout << GRAY "ScalarConverter copy constructor called" RESET << std::endl;
}

// Assignment operator overload
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	std::cout << GRAY "ScalarConverter assignment operator called" RESET << std::endl;
	if (this != &other)
		return (*this); // nothing to copy
	return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter()
{
	std::cout << GRAY "ScalarConverter destructor called" RESET << std::endl;
}

static bool	isLiteral(const std::string &str)
{
	return (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf"
		|| str == "+inf" || str == "nan");
}

static bool	isChar(const std::string &str)
{
	return (str.length() == 1 && !isdigit(str[0]));
}

static bool	isInt(const std::string &str, const size_t &len)
{
	size_t	i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (i == len)
		return (0);
	while (str[i] && i < len)
	{
		if (!isdigit(str[i++]))
			return (0);
	}
	return (1);
}

static bool	isFloat(const std::string &str, const size_t &len)
{
	if (len < 1 || (str[len - 1] != 'f' && str[len - 1] != 'F'))
		return (0);

	size_t	i = 0;
	bool	dotfound = false;
	bool	digitfound = false;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (i == len)
		return (0);
	while (str[i] && i < len - 1)
	{
		if (str[i] == '.')
		{
			if (dotfound)
				return (0);
			dotfound = true;
		}
		else if (!isdigit(str[i]))
			return (0);
		else if (!digitfound)
			digitfound = true;
		i++;
	}
	return (digitfound);
}

static bool	isDouble(const std::string &str, const size_t &len)
{
	size_t	i = 0;
	bool	dotfound = false;
	bool	digitfound = false;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (i == len)
		return (0);
	while (str[i] && i < len)
	{
		if (str[i] == '.')
		{
			if (dotfound)
				return (0);
			dotfound = true;
		}
		else if (!isdigit(str[i]))
			return (0);
		else if (!digitfound)
			digitfound = true;
		i++;
	}
	return (digitfound);
}

e_type	checkType(const std::string &literal, const size_t &len)
{
	if (isLiteral(literal))
		return (LITERAL);

	size_t	dot = literal.find('.');
	size_t	findf = literal.find('f');

	if (dot == std::string::npos)
	{
		
		if (isChar(literal))
			return (CHAR);
		if (isInt(literal, len))
			return (INT);
	}
	if (dot != std::string::npos)
	{
		if (findf != std::string::npos)
		{
			if (isFloat(literal, len))
				return (FLOAT);
		}
		else if (findf == std::string::npos)
			if (isDouble(literal, len))
				return (DOUBLE);
	}
	return (INVALID);
}

void	ScalarConverter::convert(const std::string &literal)
{
	size_t len = literal.length();
	e_type type = checkType(literal, len);
	switch (type)
	{
		case INVALID:
			std::cerr << RED "Invalid input. womp womp" RESET << std::endl;
			break ;
		case LITERAL:
			printLiteral(literal);
			break ;
		case CHAR:
			printChar(literal);
			break ;
		case INT:
			printInt(literal);
			break ;
		case FLOAT:
			printFloat(literal);
			break ;
		case DOUBLE:
			printDouble(literal);
			break ;
		break ;
	}
}
