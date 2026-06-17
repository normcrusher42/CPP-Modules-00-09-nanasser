/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:10:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/06/17 20:50:05 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	try
	{
		if (grade > 150 || grade < 1)
			_grade = grade;
		else
			throw(101);
	}
}

Bureaucrat::~Bureaucrat()
{
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << GRAY "Bureaucrat copy constructor called" RESET << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << GRAY "Bureaucrat assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->_grade = 
	}
	return (*this);
}

