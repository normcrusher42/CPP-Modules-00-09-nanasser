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
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "string"
#include "iomanip"
#include "macros.hpp"

static std::string getUserInput(std::string message)
{
	std::string input = "";

	while (input.length() == 0)
	{
		std::cout << message;
		std::getline(std::cin, input);
	}
	return (input);
}

void add_contact(PhoneBook *phoneBook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	first_name = getUserInput("Enter First name: ");
	last_name = getUserInput("Enter Last name: ");
	nickname = getUserInput("Enter Nickname: ");
	phone_number = getUserInput("Enter Phone number: ");
	darkest_secret = getUserInput("Enter Darkest secret: ");
	phoneBook->addContact(first_name , last_name, nickname, phone_number, darkest_secret);
}

int	main()
{
	std::string	command;
	PhoneBook	phoneBook;

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
		if (!(command.compare("ADD")))
			add_contact(&phoneBook);
		else if (!(command.compare("SEARCH")))
			search_contact(&phoneBook);
		else if(!(command.compare("EXIT")))
			break ;
		else
			std::cout << YELLOW "Command doesn't exist!" RESET << std::endl;
	}
	std::cout << "thank you for using my service :3" << std::endl;
	std::cout << "unfortunately, you haven't paid your contact insurance" << std::endl;
	std::cout << "therefore im deleting yo shit <3" << std::endl;
	return (0);
}
