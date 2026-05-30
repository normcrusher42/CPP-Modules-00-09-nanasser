/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:56:02 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 03:17:19 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal(void): type("wrong default")
{
	std::cout << GRAY "WrongAnimal default constructor called" RESET << std::endl;
	return ;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << GRAY "WrongAnimal copy constructor called" RESET << std::endl;
	*this = other;
    return ;
}

// Assignment operator overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << GRAY "WrongAnimal assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

// Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << GRAY "WrongAnimal destructor called" RESET << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "This is not an animal, this is also a furry.\n";
}
