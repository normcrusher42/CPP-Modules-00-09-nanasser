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

# ifndef GRAY
#  define GRAY  "\033[90m"
# endif
# ifndef YELLOW
#  define YELLOW  "\033[0;33m"
# endif
# ifndef BWHITE
#  define BWHITE  "\033[1;37m"
# endif
# ifndef RESET
#  define RESET "\033[0m"
# endif

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