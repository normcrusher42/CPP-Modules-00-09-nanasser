/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 18:53:18 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/12 18:53:18 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <new>

class Zombie
{
	private:
		std::string	name;

	public:
		// Contstructors
		Zombie(std::string name);
		~Zombie();
		// Member functions
		void		announce(void);
};

void	randomChump(std::string name);
Zombie *newZombie(std::string name);

# define BWHITE  "\033[1;37m"
# define RESET "\033[0m"

#endif