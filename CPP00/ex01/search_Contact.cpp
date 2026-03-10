/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_Contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 06:27:02 by nanasser          #+#    #+#             */
/*   Updated: 2026/03/10 06:27:02 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

static void print_contact(Contact contact)
{
	std::cout << std::endl << "First name: " << contact.getFirstname() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhonenumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestsecret() << std::endl;
}


void search_contact(PhoneBook *phoneBook)
{
	int i = 0;
	print_column_titles();
	print_phonebook_entries(phoneBook);
	std::cout << "Enter i: ";
	if (!(std::cin >> i))
	{
		std::cout << "Invalid i" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else if (i > 0 && i <= phoneBook->getNumEntries())
	{
		print_contact(phoneBook->contacts[i - 1]);
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
	{
		std::cout << "Invalid i" << std::endl;	
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
