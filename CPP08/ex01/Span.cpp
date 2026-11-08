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
	std::cout << GRAY "Span Constructor called with value " << BWHITE << getN() << RESET << std::endl;
}

Span::Span(unsigned int N) : N_(N)
{
	std::cout << GRAY "Span with N Constructor called with value " << BWHITE << getN() << RESET << std::endl;
}

Span::Span(const Span &copy)
{
	(*this) = copy;
	std::cout << GRAY "Span Copy Constructor called with value " << BWHITE << getN() << RESET << std::endl;
}

Span	&Span::operator=(const Span &other)
{
	std::cout << GRAY "Span = Operator called with value " << BWHITE << getN() << RESET << std::endl;
	if (this != &other)
	{
		N_ = other.N_;
		arr_ = other.arr_;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << GRAY "Span Destructor called with value " << BWHITE << getN() << RESET << std::endl;
}

void	Span::addNumber(int num)
{
	if (arr_.size() >= N_)
		throw TooManyElementsException();
	arr_.push_back(num);
}

int	Span::longestSpan() const
{
	if (arr_.size() < 2)
		throw InvalidSizeException();
	std::vector<int> tmp = arr_;
	std::vector<int>::iterator min = std::min_element(tmp.begin(), tmp.end());
	std::vector<int>::iterator max = std::max_element(tmp.begin(), tmp.end());
	return (*max - *min);
}

int	Span::shortestSpan() const
{
	if (arr_.size() < 2)
		throw InvalidSizeException();
	std::vector<int>	sorted = arr_;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for (std::vector<int>::size_type i = 1; i < sorted.size() - 1; i++)
	{
		if (sorted[i + 1] - sorted[i] < min)
			min = sorted[i + 1] - sorted[i];
	}
	return (min);
}

unsigned int	Span::getN() const
{
	return (N_);
}

const char *Span::TooManyElementsException::what() const throw()
{
	return (RED "N is bigger than Container size limit." RESET);
}

const char *Span::InvalidSizeException::what() const throw()
{
	return (RED "Container is too small to measure anything." RESET);
}
