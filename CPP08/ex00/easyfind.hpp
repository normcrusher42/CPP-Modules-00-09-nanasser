/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:20:56 by nanasser          #+#    #+#             */
/*   Updated: 2026/10/27 02:20:56 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>

# ifndef RESET
#  define RESET "\033[0m"
# endif
# ifndef RED
#  define RED "\033[0;31m"
# endif

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return (RED "Value not found" RESET);
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int find);

# include "easyfind.tpp"

#endif