/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:14:05 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 16:14:05 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
#include <new>

# define GRAY  "\e[90m"
# define RESET "\033[0m"

class Weapon
{
	private:
		std::string type;
	public:
		// Constructors
		Weapon(std::string type);
		~Weapon();
		// Member functions
		std::string getType() const;
		void		setType(std::string type);
};

#endif