/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 19:21:09 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/01 19:21:09 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//									//
//		Constructors/Destructor		//
//									//

Form::Form() : _name("Pizza"), _issigned(UNSIGNED), _signgrade(1), _execgrade(50)
{
	std::cout << GRAY "Form default constructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

Form::Form(const Form &other) : _name(other.getName()), _issigned(other.getSignStatus()), _signgrade(other.getSignGrade()), _execgrade(other.getExecGrade())
{
	std::cout << GRAY "Form copy constructor called" RESET << std::endl;
}

Form::Form(const std::string &name, const int signgrade, const int execgrade) : _name(name), _issigned(UNSIGNED), _signgrade(signgrade), _execgrade(execgrade)
{
	std::cout << GRAY "Form constructor " BWHITE << name << GRAY " called" RESET << std::endl;
	if (_signgrade > 150 || _execgrade > 150)
		throw (Form::GradeTooLowException());
	else if (_signgrade < 1 || _execgrade < 1)
		throw (Form::GradeTooHighException());
}

Form &Form::operator=(const Form &other)
{
	std::cout << GRAY "Form assignment operator called" RESET << std::endl;
	if (this != &other)
		this->_issigned = other._issigned;
	return (*this);
}

Form::~Form()
{
	std::cout << GRAY "Form destructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

//					//
//		Getters		//
//					//

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getSignStatus() const
{
	return (_issigned);
}

int	Form::getSignGrade() const
{
	return (_signgrade);
}

int	Form::getExecGrade() const
{
	return (_execgrade);
}

//		Member Functions		//

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw(Form::GradeTooLowException());
	this->_issigned = SIGNED;
}

//		Execption classes		//
const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! Lower your standards! (must be >= 1)");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! Raise your self-esteem! (must be <= 150)");
}

//		Overload operator		//

std::ostream	&operator<<(std::ostream &output, const Form &rhs)
{
	return (output << rhs.getName() << ", Form sign grade "<< rhs.getSignGrade() << ", can execute at " << rhs.getExecGrade() << ".");
}
