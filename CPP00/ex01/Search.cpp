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

int PhoneBook::getNumEntries()
{
	return (this->num_of_entries);
}

static void print_contact(Contact contact)
{
	std::cout << std::endl << "First name: " << contact.getFirstname() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhonenumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestsecret() << std::endl;
}

// Truncates the text to fit within 10 characters and prints it in a formatted way.
static void print_text(std::string text, bool nl)
{
	if (text.length() > 10)
	{
		text.resize(9);
		text.append(".");
	}
	if (nl)
		std::cout << std::setfill(' ') << std::setw(10) << text << "|" << std::endl;
	else
		std::cout << std::setfill(' ') << std::setw(10) << text << "|";
}

static void print_entries(PhoneBook *phoneBook)
{
	for (int i = 0; i < phoneBook->getNumEntries(); i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		print_text(phoneBook->contacts[i].getFirstname(), false);
		print_text(phoneBook->contacts[i].getLastName(), false);
		print_text(phoneBook->contacts[i].getNickname(), true);
	}
}

static void print_column_titles(void)
{
	print_text("index", false);
	print_text("First name", false);
	print_text("Last name", false);
	print_text("Nickname", true);
}

// Searches for a contact by index and displays the contact's details.
void search_contact(PhoneBook *phoneBook)
{
	int i = 0;
	print_column_titles();
	print_entries(phoneBook);
	std::cout << "\nEnter Index >>: ";
	if (!(std::cin >> i))
	{
		std::cout << YELLOW "Invalid Index" RESET << std::endl;
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
		std::cout << YELLOW "Invalid Index" RESET << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}
