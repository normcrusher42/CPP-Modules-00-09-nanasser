/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 04:34:00 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/13 23:34:44 by nanasser         ###   ########.fr       */
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
// Constructor with Int
Fixed::Fixed(const int num)
{
	std::cout << GRAY "Int constructor called" RESET << "\n";
	_fixed = num << this->_fracts;
}
// Constructor with float
Fixed::Fixed(const float num)
{
	std::cout << GRAY "Float constructor called" RESET << "\n";
	_fixed = roundf(num * (1 << this->_fracts));
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

//----------------------------------//
//				Operators			//
//----------------------------------//
Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << GRAY "Copy assignment operator called" RESET << "\n";
	if (this != &source)
		this->_fixed = source.getRawBits();
	return (*this);
}
std::ostream	&operator<<(std::ostream &output, const Fixed &fix)
{
	return (output << fix.toFloat());
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

//----------------------------------//
//				Operators			//
//----------------------------------//
float	Fixed::toFloat(void) const
{
	return ((float) this->_fixed / (float) (1 << this->_fracts));
}
int		Fixed::toInt(void) const
{
	return (this->_fixed >> this->_fracts);
}
