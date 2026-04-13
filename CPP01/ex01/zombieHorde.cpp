/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHoard.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 04:41:41 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 04:41:41 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->name = name;
	std::cout << GRAY "Zombie \"" << name << "\" created" RESET << std::endl;
}

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	if (N <= 0)
	{
		std::cout << "err?? no gud number??" << std::endl;
		return (NULL);
	}
	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
