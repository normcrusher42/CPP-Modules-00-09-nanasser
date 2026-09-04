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

// For PrintValues.cpp

# include <cstdlib>
# include <cctype>
# include <iomanip>
# include <limits>
# define INT_MIN std::numeric_limits<int>::min()
# define INT_MAX std::numeric_limits<int>::max()
# define FLOAT_MIN -std::numeric_limits<float>::max()
# define FLOAT_MAX std::numeric_limits<float>::max()
# define DOUBLE_MIN -std::numeric_limits<double>::max()
# define DOUBLE_MAX std::numeric_limits<double>::max()

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

enum e_type
{
	INVALID = 0,
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4,
	LITERAL = 5
};

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

e_type	checkType(const std::string &literal, const size_t &len);

void	printLiteral(const std::string &str);
void	printChar(const std::string &str);
void	printInt(const std::string &str);
void	printFloat(const std::string &str);
void	printDouble(const std::string &str);

#endif