/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 02:19:05 by nanasser          #+#    #+#             */
/*   Updated: 2026/02/19 02:19:05 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <ctime>

class Contact
{
	private:
		std::string First_name;
		std::string Last_name;
		std::string Nickname;
		std::string Phone_number;
		std::string Darkest_secret;
		time_t 		Created;
	public:
		// Constructors
		Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret);
		
		// Member functions
		std::string	getFirstname() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhonenumber() const;
		std::string	getDarkestsecret() const;
		time_t		getCreated() const;
};

#endif