/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/10 01:39:23 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main()
{
	std::srand(std::time(NULL)); // to seed the randomizer for RobotomyRequestForm so that it random

	std::cout << "\n | Executing a valid ShrubberyCreationForm | \n";
	Bureaucrat	gentlemen("Speed", 5);
	ShrubberyCreationForm bob("Home");

	std::cout << bob << std::endl;

	gentlemen.signForm(bob);

	gentlemen.executeForm(bob);

	std::cout << "\n | Executing a valid RobotomyRequestForm | \n";
	RobotomyRequestForm	bobs_wife("girlBoss");

	std::cout << bobs_wife << std::endl;

	gentlemen.signForm(bobs_wife);
	gentlemen.executeForm(bobs_wife);
	gentlemen.executeForm(bobs_wife);
	gentlemen.executeForm(bobs_wife);
	gentlemen.executeForm(bobs_wife);

	std::cout << "\n | Executing a valid PresidentialPardonForm | \n";
	PresidentialPardonForm	anyone_but_trump("United States");
	
	std::cout << anyone_but_trump << std::endl;
	
	gentlemen.signForm(anyone_but_trump);
	gentlemen.executeForm(anyone_but_trump);
	
	return (0);
}
