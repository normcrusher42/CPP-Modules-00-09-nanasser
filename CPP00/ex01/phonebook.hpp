/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 04:44:25 by nanasser          #+#    #+#             */
/*   Updated: 2026/02/15 04:44:25 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <limits>
# include <iomanip>
# include "Contact.hpp"
# include "macros.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		int	num_of_entries;
	public:
		// Contact book
		Contact contacts[MAX_CONTACTS];
		// Constructors
		PhoneBook();
		~PhoneBook();

		// Member functions
		void	addContact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret);
		int getNumEntries();
};

void search_contact(PhoneBook *phoneBook);

#endif
