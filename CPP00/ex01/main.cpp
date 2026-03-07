/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 01:55:13 by nanasser          #+#    #+#             */
/*   Updated: 2026/03/07 01:55:13 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
// #include "PhoneBook.hpp"
#include "string"
#include "iomanip"
#include "macros.hpp"

int	main()
{
	std:: string	command;
	// PhoneBook		phonebook;

	std::cout << BBLUE "\nWelcome to My Epic Phonebook!" RESET << std::endl;
	while (1)
	{
		std::cout << BWHITE "Choose from the following options:" RESET << std::endl << std::endl;
		std::cout << "ADD: to save a new contact\n" \
		<< "SEARCH: to display a specific contact\n"
		<< "EXIT: to exit the program\n" << std::endl;
		std::cout << ">> ";
		if (!(std::getline(std::cin, command)))
			return (std::cout << std::endl, 1);
		// if (!(command.compare("ADD")))
		// 	add_contact(&phoneBook);
		// else if (!(command.compare("SEARCH")))
		// 	search_contact(&phoneBook);
		else if(!(command.compare("EXIT")))
			break ;
		else
			std::cout << YELLOW "Invalid command!" RESET << std::endl;
	}
	return (0);
}
