/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:15:07 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 02:25:34 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog(void): Animal()
{
	std::cout << GRAY "Dog default constructor called" RESET << std::endl;
	this->type = "Dog";
	return ;
}

// Copy constructor
Dog::Dog(const Dog &other): Animal()
{
	std::cout << GRAY "Dog copy constructor called" RESET << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << GRAY "Dog assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	std::cout << GRAY "Dog destructor called" RESET << std::endl;
	return ;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " says: WOOF WOOF\n";
}
