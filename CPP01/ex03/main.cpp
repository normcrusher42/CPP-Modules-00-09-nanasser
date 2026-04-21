/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:13:12 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 16:13:12 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	{
		Weapon club = Weapon("Twitter Doomposting");
		HumanA bob("Trump", club);
		bob.attack();
		club.setType("Domain Expansion: infinite yapping");
		bob.attack();
	}
	{
		Weapon club = Weapon("Mute button");
		HumanB jim("John Amongus");
		jim.setWeapon(club);
		jim.attack();
		club.setType("\033[0;35mHollow Purple" GRAY);
		jim.attack();
	}
	return (0);
}