/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 22:42:21 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/02 22:42:21 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//									//
//		Constructors/Destructor		//
//									//

AForm::AForm() : _name("Pizza"), _issigned(UNSIGNED), _signgrade(1), _execgrade(50)
{
	std::cout << GRAY "Form default constructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

AForm::AForm(const AForm &other) : _name(other.getName()), _issigned(other.getSignStatus()), _signgrade(other.getSignGrade()), _execgrade(other.getExecGrade())
{
	std::cout << GRAY "Form copy constructor called" RESET << std::endl;
	return ;
}

AForm::AForm(const std::string &name, const int signgrade, const int execgrade) : _name(name), _issigned(UNSIGNED), _signgrade(signgrade), _execgrade(execgrade)
{
	std::cout << GRAY "Form constructor " BWHITE << name << GRAY " called" RESET << std::endl;
	if (_signgrade > 150 || _execgrade > 150)
		throw (AForm::GradeTooLowException());
	else if (_signgrade < 1 || _execgrade < 1)
		throw (AForm::GradeTooHighException());
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << GRAY "Form assignment operator called" RESET << std::endl;
	if (this != &other)
		this->_issigned = other._issigned;
	return (*this);
}

AForm::~AForm()
{
	std::cout << GRAY "Form destructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

//					//
//		Getters		//
//					//

std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getSignStatus() const
{
	return (_issigned);
}

int	AForm::getSignGrade() const
{
	return (_signgrade);
}

int	AForm::getExecGrade() const
{
	return (_execgrade);
}

//		Member Functions		//

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw(AForm::GradeTooLowException());
	this->_issigned = SIGNED;
}

void	AForm::executeAction() const
{
	std::cout << "AFORM ACTION SHOULD NOT BE EXECUTED" << std::endl;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignStatus())
		throw (AForm::FormNotSignedException());
	else if (this->getExecGrade() < executor.getGrade())
		throw (AForm::GradeTooLowException());
	this->executeAction();
}


//		Execption classes		//
const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! Lower your standards! (must be >= 1)");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! Raise your self-esteem! (must be <= 150)");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("Signature is missing! Time to pay for your car insurance again.. if you have a car.");
}

//		Overload operator		//

std::ostream	&operator<<(std::ostream &output, const AForm &rhs)
{
	return (output << rhs.getName() << ", Form sign grade "<< rhs.getSignGrade() << ", can execute at " << rhs.getExecGrade() << ".");
}
