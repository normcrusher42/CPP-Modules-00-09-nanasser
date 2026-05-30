/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:55:21 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 03:15:19 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << GRAY "WrongCat default constructor called" RESET << std::endl;
	this->type = "wrong cat";
	return ;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other): WrongAnimal()
{
	std::cout << GRAY "WrongCat copy constructor called" RESET << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << GRAY "WrongCat assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << GRAY "WrongCat destructor called" RESET << std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " says: 'Wrong cat. That's a furry.'\n";
}
