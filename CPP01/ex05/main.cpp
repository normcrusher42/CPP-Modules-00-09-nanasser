/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 02:11:11 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/22 02:11:11 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	Harl;

	std::cout << BWHITE "---DEBUG---" RESET << std::endl;
	Harl.complain("DEBUG");
	std::cout << BWHITE "---INFO---" RESET << std::endl;
	Harl.complain("INFO");
	std::cout << BWHITE "---WARNING---" RESET << std::endl;
	Harl.complain("WARNING");
	std::cout << BWHITE "---ERROR---" RESET << std::endl;
	Harl.complain("ERROR");
	std::cout << BWHITE "---INVALID LEVEL---" RESET<< std::endl;
	Harl.complain("WHAT");
}