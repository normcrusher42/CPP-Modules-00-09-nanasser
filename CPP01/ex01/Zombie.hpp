/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 04:35:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 04:35:58 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <new>
# define BWHITE  "\033[1;37m"
# define RESET "\033[0m"
# define GRAY  "\e[90m"

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif