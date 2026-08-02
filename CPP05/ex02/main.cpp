/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/02 22:47:07 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << BWHITE "   Normal Form (Default values)\n" RESET;
	/* Normal Form (Default values) */
	AForm defaultForm;
	std::cout << defaultForm << "\n";
	///////////////////////

	std::cout << BWHITE "\n Valid Custom Form Creation\n" RESET;
	/* Valid Custom Form Creation */
	try
	{
		AForm taxForm("Tax Form 28B", 50, 25);
		std::cout << taxForm << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////

	/* Invalid Form Grade Creation (Too High / Too Low) */
	std::cout << BWHITE "\n Invalid Form Grade Creation (Too High / Too Low) \n" RESET;
	try
	{
		AForm impossibleForm("Super Classified", 0, 10);
		std::cout << impossibleForm << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	try
	{
		AForm uselessForm("Trash Permit", 151, 150);
		std::cout << uselessForm << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////

	std::cout << BWHITE "\n Successful Signing Test \n" RESET;
	/* Successful Signing Test */
	try
	{
		Bureaucrat boss("Gregory", 1);
		AForm permit("Building Permit", 10, 5);

		std::cout << permit << "\n";
		boss.signForm(permit);
		std::cout << permit << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////

	std::cout << BWHITE "\n Failed Signing Test (Grade too low) \n" RESET;
	/* Failed Signing Test (Grade too low) */
	try
	{
		Bureaucrat intern("Steve", 100);
		AForm topSecret("Nuclear Launch Code", 5, 1);

		std::cout << topSecret << "\n";
		intern.signForm(topSecret); // signForm internally catches the exception and prints message!
		std::cout << topSecret << "\n";
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	///////////////////////

	std::cout << BWHITE "\n Signing default constructor \n" RESET;
	try
	{
		Bureaucrat burycat("Dante from the hit game Devil May Cry", 1);
		burycat.signForm(defaultForm); // Form started with 1 by default
	}
	catch (std::exception &e)
	{
		std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
	}
	std::cout << BWHITE "\n Pizza (which was first constructed normally) should be destroyed now \n" RESET;

	return (0);
}
