/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 23:35:19 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/09 23:35:19 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//									//
//		Constructors/Destructor		//
//									//

RobotomyRequestForm::RobotomyRequestForm() : AForm("Lobotomized boi", 72, 45), _target("bling")
{
	std::cout << GRAY "RobotomyRequestForm default constructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Lobotomized boi", 72, 45), _target(target)
{
	std::cout << GRAY "RobotomyRequestForm constructor " BWHITE << this->getName() << GRAY " with sign and execute grades " BWHITE << this->getSignGrade() << GRAY " and " BWHITE << this->getExecGrade() << GRAY " called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
	std::cout << GRAY "RobotomyRequestForm copy constructor called" RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << GRAY "RobotomyRequestForm assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << GRAY "RobotomyRequestForm destructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

//		Member Functions		//

void	RobotomyRequestForm::executeAction() const
{
	std::cout << "*insert extremely loud bass roblox sounds for drilling noises*" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << BWHITE << this->_target << RESET " has been lobotomized successfully!" << std::endl;
	else
		std::cout << BWHITE << this->_target << RESET " lobotomization has failed 😔 " << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

std::ostream	&operator<<(std::ostream &output, const RobotomyRequestForm &rhs)
{
	return (output << rhs.getName() << ", Form sign grade "<< rhs.getSignGrade() << ", can execute at " << rhs.getExecGrade() << ", targeting " << rhs.getTarget() << ".");
}
