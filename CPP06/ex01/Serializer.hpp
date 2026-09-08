/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:46:08 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/08 02:00:00 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

# ifndef GRAY
#  define GRAY "\033[90m"
# endif
# ifndef BWHITE
#  define BWHITE  "\033[1;37m"
# endif
# ifndef RESET
#  define RESET "\033[0m"
# endif
# ifndef RED
#  define RED "\033[0;31m"
# endif
# ifndef BRED
#  define BRED "\033[1;31m"
# endif

class Serializer
{
	private:
		// Constructors & Destructor (private to avoid instantiating them)
		Serializer();
		Serializer(const Serializer&other);
		Serializer &operator=(const Serializer &other);
		~Serializer();
	public:
		// Member Function
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif