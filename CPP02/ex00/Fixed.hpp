/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:14:33 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/05 18:14:33 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

# ifndef GRAY
#  define GRAY "\033[90m"
# endif
# ifndef BWHITE
#  define BWHITE  "\033[1;37m"
# endif
# ifndef RESET
#  define RESET "\033[0m"
# endif

class Fixed
{
	private:
		int					_fixed;
		static const int	_fracts;
	public:
		// Constructors
		Fixed(); // Initialize
		Fixed(const Fixed &copy); // Copy
		Fixed &operator=(const Fixed &source); // Assignment
		~Fixed(); // Destroy

		// Member Functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif