/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:06:38 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/01 01:06:38 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N_(0)
{
	std::cout << GRAY "Span Constructor called with value" << BWHITE << getN() << RESET << std::endl;
}

Span::Span(const Span &copy)
{
	(*this) = copy;
	std::cout << GRAY "Span Copy Constructor called with value" << BWHITE << getN() << RESET << std::endl;
}

Span	&Span::operator=(const Span &other)
{
	std::cout << GRAY "Span = Operator called with value" << BWHITE << other.getN() << RESET << std::endl;
	if (*this != other)
	{
		N_ = other.N_;
		arr_ = other.arr_;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << GRAY "Span Destructor called with value" << BWHITE << getN() << RESET << std::endl;
}

void	Span::addNumber(int num)
{
	if (arr_.size >= N_)
		throw TooManyElementsException
	arr_.push_back(num);
}

unsigned int	Span::getN()
{
	return (N_)
}
