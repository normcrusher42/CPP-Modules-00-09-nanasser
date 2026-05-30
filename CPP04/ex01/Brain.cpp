/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:41:53 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 03:13:13 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Default constructor
Brain::Brain(void)
{
	std::cout << GRAY "Brain default constructor called" RESET << std::endl;
	return ;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
	std::cout << GRAY "Brain copy constructor called" RESET << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
	std::cout << GRAY "Brain assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		std::copy(other.ideas, other.ideas + 100, this->ideas);
	}
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << GRAY "Brain destructor called" RESET << std::endl;
    return ;
}

void Brain::setIdea(unsigned int index, const std::string& idea)
{
	if (index >= 100)
	{
		std::cout << "Error: out of bounds (1-100)" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index) const
{
	if (index >= 100)
	{
		return ("Error: out of bounds (1-100)\n");
	}
	return this->ideas[index];
}
