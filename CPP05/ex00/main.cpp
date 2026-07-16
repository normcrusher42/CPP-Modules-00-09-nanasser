/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/07/17 02:29:12 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{

	/* Normal Bureaucrat (100% normal!!!) */
	Bureaucrat aBureaucrat;
	std::cout << aBureaucrat << "\n";

	/* Valid Grade */
	try
	{
		// Custom Bureaucrat
		Bureaucrat Bureaucratian("Gregory", 1);
		std::cout << Bureaucratian << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////

	/* Invalid Grade */
	try
	{
		Bureaucrat specialBureaucratian("Minecraft Steve", 999);
		std::cout << specialBureaucratian << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////

	/* Increment/Decrement tests */
	try
	{
		Bureaucrat Bureaucat("Bean", 1);
		// Bureaucat.incrementGrade(); /* will fail */
		Bureaucat.decrementGrade();
		std::cout << Bureaucat << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Bureaucat("Bean", 150);
		Bureaucat.incrementGrade(); 
		// Bureaucat.decrementGrade(); /* will fail */
		std::cout << Bureaucat << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////
	
	return (0);
}
