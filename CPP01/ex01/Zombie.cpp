/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 04:35:48 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 04:35:48 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout << GRAY "Zombie \"" << name << "\" destroyed" RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << BWHITE ": Moar brainz!" RESET << std::endl;
}
