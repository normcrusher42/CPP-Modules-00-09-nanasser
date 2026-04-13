/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:24:01 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 16:24:01 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type)
{
	setType(type);
	std::cout << GRAY "Weapon \"" << type << "\" created" RESET << std::endl;
}

Weapon::~Weapon()
{
	std::cout << GRAY "Weapon \"" << type << "\" destroyed" RESET << std::endl;
}
