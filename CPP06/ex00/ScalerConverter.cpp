/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:10:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/01 18:34:46 by nanasser         ###   ########.fr       */
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

static bool	isInt(const std::string &str, int len)
{
	int	sign = 0;
	int	i = 0;

	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = 1;
	while (str[i] && (len < 12 || sign && len < 11))
	{
		if (!isdigit(str[i++]))
			return (0);
	}
	return (1);
}

e_type	checkType(const std::string &literal, int &len)
{
	if (isLiteral(literal))
		return (LITERAL);
	else if (isChar(literal))
		return (CHAR);
	else if (isInt(literal, len))
		return (INT);
}

void	ScalarConverter::convert(const std::string &literal)
{
	int len = static_cast<int>(literal.length());
	e_type type = checkType(literal, len);
	switch (type)
}

// std::ostream	&operator<<(std::ostream &output, const ScalarConverter &rhs)
// {
// 	return (output << rhs.getName() << ", ScalarConverter grade "<< rhs.getGrade() << ".");
// }
