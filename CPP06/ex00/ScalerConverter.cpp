/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:10:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/18 17:32:41 by nanasser         ###   ########.fr       */
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

void	ScalarConvert::convert(const std::string &literal)
{
	
}

// std::ostream	&operator<<(std::ostream &output, const ScalarConverter &rhs)
// {
// 	return (output << rhs.getName() << ", ScalarConverter grade "<< rhs.getGrade() << ".");
// }
