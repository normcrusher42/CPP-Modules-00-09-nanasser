/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:10:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/02 22:06:14 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Speed"), _grade(67)
{
	std::cout << GRAY "Bureaucrat default constructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	std::cout << GRAY "Bureaucrat constructor " BWHITE << name << GRAY " with grade " BWHITE << grade << GRAY " called" RESET << std::endl;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade = grade;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()), _grade(other.getGrade())
{
	std::cout << GRAY "Bureaucrat copy constructor called" RESET << std::endl;
	return ;
}

// Assignment operator overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << GRAY "Bureaucrat assignment operator called" RESET << std::endl;
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << GRAY "Bureaucrat destructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void		Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		if (form.getSignStatus())
		{
			std::cout << form.getName() << GRAY " is already signed!" RESET << '\n';
			return ;
		}
		form.beSigned(*this);
		std::cout << BWHITE << form.getName() << GRAY " was successfully signed by " BWHITE << this->getName() << "!" << RESET "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BWHITE << this->getName() << BRED " couldn't sign " BWHITE << form.getName() << BRED " because: " << e.what() << RESET "\n";
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! Lower your standards! (must be >= 1)");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! Raise your self-esteem! (must be <= 150)");
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &rhs)
{
	return (output << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() << ".");
}
