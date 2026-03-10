/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 04:37:38 by nanasser          #+#    #+#             */
/*   Updated: 2026/03/06 04:37:38 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
	First_name = "";
	Last_name = "";
	Created = time(&Created);
}

// Member functions
std::string	Contact::getLastName() const
{return (Lastname);}

std::string	Contact::getFirstname() const
{return (Firstname);}

std::string	Contact::getNickname() const
{return (Nickname);}

std::string	Contact::getPhonenumber() const
{return (Phone_number);}

std::string	Contact::getDarkestsecret() const
{return (Darkest_secret);}

Contact::~Contact()
{}

time_t	Contact::getCreated() const
{return (Created);}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret)
{
	First_name = first_name;
	Last_name = last_name;
	nickname = nickname;
	Phone_number = phone_number;
	Darkest_secret = darkest_secret;
	time(&Created);
}
