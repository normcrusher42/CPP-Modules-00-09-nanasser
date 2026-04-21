/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 02:25:07 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/22 02:25:07 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug(void)
{
	std::cout << "Don't look at me! I'm not the one who malloc'd 549755813888 Bytes to address 0x7269636B7 on line 13 in the current DDR4 8x4gb 3600Mhz RAM kit at 3:46am in the morning when nanasser was working on this exercise *wink*" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Erm aktually, the L to the Ratio is represented by a six seven minus the solar Radio flux. also you're broke. The file doesn't lie!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I could break. But I could also not. im schizophrenic btw. i also love making pisciners suffer haha" << std::endl;
}

void Harl::error(void)
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*complaints[i])();
			return ;
		}
		i++;
	}
	std::cout << "Invalid Level" << std::endl;
}
