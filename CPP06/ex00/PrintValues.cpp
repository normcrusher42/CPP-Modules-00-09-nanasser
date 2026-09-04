/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printValues.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 20:11:35 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/04 20:11:35 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printLiteral(const std::string &str)
{
	std::cout << "char: impossible" << '\n';
	std::cout << "int: impossible" << '\n';

	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << '\n';
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << '\n';
		std::cout << "double: -inf" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "float: +inff" << '\n';
		std::cout << "double: +inf" << std::endl;
	}
	else // this should NEVER be reached in this scope.
	{
		std::cout << "float: impossible" << '\n';
		std::cout << "double: impossible" << std::endl;
	}
}

void	printChar(const std::string &str)
{
	char	c = str[0];

	if (isprint(c))
	{
		std::cout << "char: '" << c << "'" << '\n';
		std::cout << "int: " << static_cast<int>(c) << '\n';
		std::cout << "float: " << static_cast<float>(c) << ".0f" << '\n';
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << '\n';
		std::cout << "int: " << static_cast<int>(c) << '\n';
		std::cout << "float: " << static_cast<float>(c) << ".0f" << '\n';
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
}

void	printInt(const std::string &str)
{
	long	nbr = std::atol(str.c_str());

	if (nbr < 0 || nbr > 127)
		std::cout << "char: impossible" << '\n';
	else if (isprint(nbr))
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << '\n';
	else
		std::cout << "char: Non displayable" << '\n';

	if (nbr < INT_MIN || nbr > INT_MAX)
		std::cout << "int: impossible" << '\n';
	else
		std::cout << "int: " << static_cast<int>(nbr) << '\n';
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nbr) << "f" << '\n';
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(nbr) << std::endl;
}

void	printFloat(const std::string &str)
{
	double	dbl = std::strtod(str.c_str(), NULL);
	float	nbr = std::atof(str.c_str());

	if (nbr < 0 || nbr > 127)
		std::cout << "char: impossible" << '\n';
	else if (isprint(nbr))
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << '\n';
	else
		std::cout << "char: Non displayable" << '\n';

	if (nbr < INT_MIN || nbr > INT_MAX)
		std::cout << "int: impossible" << '\n';
	else
		std::cout << "int: " << static_cast<int>(nbr) << '\n';
	
	if (nbr < FLOAT_MIN || nbr > FLOAT_MAX)
		std::cout << "float: impossible" << '\n';
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << nbr << "f" << '\n';
	std::cout << "double: " << std::fixed << std::setprecision(1) << dbl << std::endl;
}

void	printDouble(const std::string &str)
{
	double	nbr = std::strtod(str.c_str(), NULL);

	if (nbr < 0 || nbr > 127)
		std::cout << "char: impossible" << '\n';
	else if (isprint(nbr))
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << '\n';
	else
		std::cout << "char: Non displayable" << '\n';

	if (nbr < INT_MIN || nbr > INT_MAX)
		std::cout << "int: impossible" << '\n';
	else
		std::cout << "int: " << static_cast<int>(nbr) << '\n';
	
	if (nbr < -FLOAT_MAX || nbr > FLOAT_MAX)
		std::cout << "float: impossible" << '\n';
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nbr) << "f" << '\n';
	std::cout << "double: " << std::fixed << std::setprecision(1) << nbr << std::endl;
}
