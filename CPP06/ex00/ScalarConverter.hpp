/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:11:08 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/02 00:50:26 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

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

class ScalarConverter
{
	private:
		// Constructors & Destructor (private to avoid instantiating them)
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
	public:
		// Member Function
		static void	convert(const std::string &literal);
};

// std::ostream	&operator<<(std::ostream &output, const ScalarConverter &rhs);

#endif