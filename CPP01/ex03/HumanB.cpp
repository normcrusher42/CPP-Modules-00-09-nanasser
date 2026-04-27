/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:54:49 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 16:54:49 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	std::cout << GRAY "Human B \"" << name << "\" was deployed" RESET << std::endl;
}

HumanB::~HumanB()
{
	std::cout << GRAY "Human B \"" << name << "\" has fallen.." RESET << std::endl;
}

void	HumanB::attack(void)
{
	if (weapon == NULL)
	{
		std::cout << name << " attacks with their bare hands" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
