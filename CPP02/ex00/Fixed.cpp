/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:14:21 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/05 18:14:21 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracts = 8;

//--------------------------------------//
//				Constructors			//
//--------------------------------------//
// Default Initializer
Fixed::Fixed() : _fixed(0)
{
	std::cout << GRAY "Default constructor called" RESET << "\n";
}
// Constructor copy
Fixed::Fixed(const Fixed &copy)
{
	std::cout << GRAY "Copy constructor called" RESET << "\n";
	*this = copy;
}
// Destructor
Fixed::~Fixed()
{
	std::cout << GRAY "Destructor called" RESET << "\n";
}

//------------------------------//
//			Operator(s)			//
//------------------------------//
Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << GRAY "Copy assignment operator called" RESET << "\n";
	if (this != &source)
		this->_fixed = source.getRawBits();
	return (*this);
}

//----------------------------------//
//			Getter/Setters			//
//----------------------------------//
int	Fixed::getRawBits(void) const
{
	std::cout << GRAY "getRawBits member function called" RESET << "\n";
	return (this->_fixed);
}
void	Fixed::setRawBits(int const raw)
{
	std::cout << GRAY "setRawBits member function called" RESET << "\n";
	this->_fixed = raw;
}
