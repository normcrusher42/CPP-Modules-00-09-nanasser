/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:45:47 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 16:45:47 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include <new>
# include "Weapon.hpp"

# define GRAY  "\e[90m"
# define YELLOW  "\033[0;33m"
# define BWHITE  "\033[1;37m"
# define RESET "\033[0m"

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		// Constructors
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		// Member functions
		void	attack(void);
};

#endif