/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 04:34:00 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/13 04:34:01 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracts = 8;

Fixed::Fixed() : _fixed(0)
{
	std::cout << GRAY "Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << GRAY "Copy constructor called" RESET << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << GRAY "Copy assignment operator called" RESET << std::endl;
	if (this != &source)
		this->_fixed = source.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << GRAY "Destructor called" RESET << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << GRAY "getRawBits member function called" RESET << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << GRAY "setRawBits member function called" RESET << std::endl;
	this->_fixed = raw;
}
