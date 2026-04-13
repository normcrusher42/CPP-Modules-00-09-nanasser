/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 19:34:34 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/12 19:34:34 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	// std::cout << "Zombie \"" << name << "\" created" << std::endl;
}

Zombie::~Zombie()
{
	// std::cout << "Zombie \"" << name << "\" destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << BWHITE ": BraiiiiiiinnnzzzZ..." RESET << std::endl;
}
