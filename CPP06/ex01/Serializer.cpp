/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:47:16 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/08 00:47:16 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << GRAY "Serializer default constructor called" RESET << std::endl;
}

// Copy constructor
Serializer::Serializer(const Serializer &other)
{
	(void)other;
	std::cout << GRAY "Serializer copy constructor called" RESET << std::endl;
}

// Assignment operator overload
Serializer &Serializer::operator=(const Serializer &other)
{
	std::cout << GRAY "Serializer assignment operator called" RESET << std::endl;
	if (this != &other)
		return (*this); // nothing to copy
	return (*this);
}

// Destructor
Serializer::~Serializer()
{
	std::cout << GRAY "Serializer destructor called" RESET << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
