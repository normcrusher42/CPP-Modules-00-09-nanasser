/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:56:54 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 02:56:55 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <algorithm>

# ifndef GRAY
#  define GRAY "\033[90m"
# endif
# ifndef BWHITE
#  define BWHITE  "\033[1;37m"
# endif
# ifndef RESET
#  define RESET "\033[0m"
# endif

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& other);
		Brain &operator=(const Brain &other);
		virtual ~Brain();

		std::string getIdea(unsigned int index) const;
		void setIdea(unsigned int index, const std::string& idea);
};

#endif