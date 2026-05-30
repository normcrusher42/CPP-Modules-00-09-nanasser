/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:56:29 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 03:13:23 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() : Animal()
{
	std::cout << GRAY "Dog constructor called" RESET << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << GRAY "Dog copy constructor called" RESET << std::endl;
	this->brain = new Brain(*other.brain);
	return;
}

// Assignment operator overload
Dog &Dog::operator=(const Dog &other)
{
	std::cout << GRAY "Dog assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

// Destructor
Dog::~Dog(void)
{
	delete this->brain;
	std::cout << GRAY "Dog destructor called" RESET << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " says: WOOF WOOF\n";
}

void Dog::setIdea(unsigned int index, const std::string &idea)
{
	if (index >= 100)
	{
		std::cout << "Error: out of bounds (1-100)" << std::endl;
		return;
	}
	this->brain->setIdea(index, idea);
}
std::string Dog::getIdea(unsigned int index) const
{
	if (index >= 100)
	{
		return ("Error: out of bounds (1-100)\n");
	}
	return this->brain->getIdea(index);
}