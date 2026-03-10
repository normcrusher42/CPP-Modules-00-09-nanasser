/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 04:42:47 by nanasser          #+#    #+#             */
/*   Updated: 2026/02/15 04:42:47 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int find_oldest_entry(Contact contacts[MAX_CONTACTS])
{
	int	oldest = 0;

	for (int i = 0; i < MAX_CONTACTS; i++)
		if (contacts[i].getCreated() < contacts[oldest].getCreated())
			oldest = i;
	return (oldest);
}

PhoneBook::PhoneBook()
{num_of_entries = 0;}

PhoneBook::~PhoneBook()
{}

void PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname,
							std::string phone_number, std::string darkest_secret)
{
	if(num_of_entries < MAX_CONTACTS)
	{
		contacts[num_of_entries] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
		num_of_entries++;
	}
	else
	{
		int	oldest_entry = find_oldest_entry(contacts);
		contacts[oldest_entry] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	}
		
}
