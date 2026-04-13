/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 05:26:06 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 05:26:06 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <new>

#define BWHITE  "\033[1;37m"
#define RESET "\033[0m"

int	main(void)
{
	// Initializes string and its pointers
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	// Prints string and its pointers' addresses
	std::cout << "Pointer Addresses:" << std::endl;
	std::cout << "String:    " << BWHITE << &string << RESET << std::endl;
	std::cout << "StringPTR: " << BWHITE << stringPTR << RESET << std::endl;
	std::cout << "StringREF: " << BWHITE << &stringREF << RESET << std::endl << std::endl;

	// Prints the value of string from it and its pointers
	std::cout << "Pointer value:" << std::endl;
	std::cout << "String:    " << BWHITE << string << RESET << std::endl;
	std::cout << "StringPTR: " << BWHITE << *stringPTR << RESET << std::endl;
	std::cout << "StringREF: " << BWHITE << stringREF << RESET << std::endl;

	return (0);
}