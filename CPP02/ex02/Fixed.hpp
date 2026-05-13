/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 04:34:11 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/14 03:56:05 by nanasser         ###   ########.fr       */
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
		~Fixed(); // Destroy
		
		Fixed	&operator=(const Fixed &source); // Assignment
		// Comparison Operators
		bool	operator>(const Fixed &source) const; // Bigger than
		bool	operator<(const Fixed &source) const; // Smaller than
		bool	operator>=(const Fixed &source) const; // Bigger or equal to
		bool	operator<=(const Fixed &source) const; // Smaller or equal to
		bool	operator==(const Fixed &source) const; // Equal to
		bool	operator!=(const Fixed &source) const; // Not equal to
		// Arithmetic Operators
		float	operator+(const Fixed &source) const;
		float	operator-(const Fixed &source) const;
		float	operator*(const Fixed &source) const;
		float	operator/(const Fixed &source) const;
		// Increment/decrement Operators
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		// Member Functions
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &fix1, Fixed &fix2);
		static const Fixed	&min(const Fixed &fix1, const Fixed &fix2);
		static Fixed		&max(Fixed &fix1, Fixed &fix2);
		static const Fixed	&max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream	&operator<<(std::ostream &output, const Fixed &fix);

#endif

