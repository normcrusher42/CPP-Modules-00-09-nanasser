/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:15:13 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 02:35:34 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal(void): type("default")
{
	std::cout << GRAY "Animal default constructor called" RESET << std::endl;
	return ;
}

// Copy constructor
Animal::Animal(const Animal &other)
{
	std::cout << GRAY "Animal copy constructor called" RESET << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << GRAY "Animal assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << GRAY "Animal destructor called" RESET << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "its an animal, but it could also be a furry.\n";
}
