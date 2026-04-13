/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 04:33:02 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 04:33:02 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Horde;
	int	N = 5; // if <= 0, returns error

	Horde = zombieHorde(N, "John Zombie");
	if (!Horde)
		return (1);
	for (int i = 0; i < N; i++)
	{
		std::cout << "Index " << (i + 1) << ": ";
		Horde[i].announce();
	}
	delete[] Horde;
	return (0);
}
