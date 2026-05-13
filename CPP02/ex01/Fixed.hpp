/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 04:34:11 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/13 21:38:14 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &copy); // Copy
		Fixed &operator=(const Fixed &source); // Assignment
		~Fixed(); // Destroy

		// Member Functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &fix);

#endif

