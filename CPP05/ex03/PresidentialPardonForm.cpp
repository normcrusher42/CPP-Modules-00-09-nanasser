/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 01:29:07 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/10 01:29:07 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//									//
//		Constructors/Destructor		//
//									//

PresidentialPardonForm::PresidentialPardonForm() : AForm("American boi", 25, 5), _target("bling")
{
	std::cout << GRAY "PresidentialPardonForm default constructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("American boi", 25, 5), _target(target)
{
	std::cout << GRAY "PresidentialPardonForm constructor " BWHITE << this->getName() << GRAY " with sign and execute grades " BWHITE << this->getSignGrade() << GRAY " and " BWHITE << this->getExecGrade() << GRAY " called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target)
{
	std::cout << GRAY "PresidentialPardonForm copy constructor called" RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << GRAY "PresidentialPardonForm assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << GRAY "PresidentialPardonForm destructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

//		Member Functions		//

void	PresidentialPardonForm::executeAction() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

std::ostream	&operator<<(std::ostream &output, const PresidentialPardonForm &rhs)
{
	return (output << rhs.getName() << ", Form sign grade "<< rhs.getSignGrade() << ", can execute at " << rhs.getExecGrade() << ", targeting " << rhs.getTarget() << ".");
}
