/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:53:49 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 16:53:49 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include <new>
# include "Weapon.hpp"

# define GRAY  "\e[90m"
# define YELLOW  "\033[0;33m"
# define BWHITE  "\033[1;37m"
# define RESET "\033[0m"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		// Constructors
		HumanB(std::string name);
		~HumanB();
		// Member functions
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif