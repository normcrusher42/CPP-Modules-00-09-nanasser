/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 02:11:42 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/22 02:11:42 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

#define BWHITE  "\033[1;37m"
#define RESET "\033[0m"

class Harl
{
	private:
		// Member Functions
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		// Constructors
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif