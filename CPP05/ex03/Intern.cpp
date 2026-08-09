/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 02:03:39 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/10 02:03:39 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << GRAY "Intern default constructor called" RESET << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << GRAY "Intern copy constructor called" RESET << std::endl;
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << GRAY "Intern assignment operator called" RESET << std::endl;
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	std::cout << GRAY "Intern destructor called" RESET << std::endl;
}

static AForm* createShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}
static AForm* createRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}
static AForm* createPardon(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string form_names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(*Forms[])(const std::string &target) = {&createShrubbery, &createRobotomy, &createPardon};
	for (int i = 0; i < 3; i++)
	{
		if (form_names[i] == name)
		{
			std::cout << "Intern creates " BWHITE << name << RESET " form." << std::endl;
			return (Forms[i](target));
		}
	}
	std::cout << "Intern deemed your form request Ai generated and has gladly rejected it <3 (basically failed making a form)" << std::endl;
	return (NULL);
}
