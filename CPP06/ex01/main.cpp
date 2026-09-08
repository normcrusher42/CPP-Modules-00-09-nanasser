/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/08 02:50:16 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	citizen; citizen.name = "John Kaisen"; citizen.address = const_cast<char *>("24.5202350, 54.3682829"); citizen.credit_card_number = 676767101; citizen.homeless_status = 1; citizen.steam_login = "the Steam customer support ninjas are on their way to peel off all your skin and make shoes out of it.";
	Data	*Data_ptr = &citizen;

	std::cout << "The Original Data:         " << &citizen << '\n';
	std::cout << "The Copied Data ptr:       " << Data_ptr << '\n';
	
	uintptr_t	new_ptr = Serializer::serialize(Data_ptr);

	std::cout << "The Serialized Data ptr:   " << new_ptr << '\n';
	
	Data *new_Data_ptr = Serializer::deserialize(new_ptr);

	if (new_Data_ptr == Data_ptr) // if pointers match, the deserialization was successful!
	{
		std::cout << "The Deserialized Data ptr: " << new_Data_ptr << '\n' << std::endl;
		std::cout << new_Data_ptr->name << '\n';
		std::cout << new_Data_ptr->address << '\n';
		std::cout << new_Data_ptr->credit_card_number << '\n';
		std::cout << new_Data_ptr->homeless_status << '\n';
		std::cout << new_Data_ptr->steam_login<< std::endl;
	}
	else
		std::cout << RED "pointers do not match!" RESET << std::endl;

	return (0);
}
