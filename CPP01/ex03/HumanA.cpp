/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:06:26 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 19:06:26 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	std::cout << GRAY "Human A \"" << name << "\" was deployed" RESET << std::endl;
}

HumanA::~HumanA()
{
	std::cout << GRAY "Human A \"" << name << "\" has fallen.." RESET << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << BWHITE << name << RESET " attacks with their " YELLOW << weapon.getType() << RESET << std::endl;
}
