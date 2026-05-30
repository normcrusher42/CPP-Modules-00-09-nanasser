/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:15:10 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 02:24:48 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat(): Animal()
{
	std::cout << GRAY "Cat constructor called" RESET << std::endl;
	this->type = "Cat";
	return ;
}

// Copy constructor
Cat::Cat(const Cat &other): Animal()
{
	std::cout << GRAY "Cat copy constructor called" RESET << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << GRAY "Cat assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << GRAY "Cat destructor called" RESET << std::endl;
	return ;
}

void Cat::makeSound() const
{
	std::cout<< this->getType() << " says: MEOW MEOW MEOW MEOWWWWWWWWW\n";
}
