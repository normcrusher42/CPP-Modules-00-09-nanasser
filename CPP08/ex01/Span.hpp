/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:06:40 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/01 01:06:40 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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

class Span
{
	private:
		unsigned int	N_;
		std::vect<int>	arr_;
	public:
		Span();
		Span(const Span &copy);
		Span	&operator=(const Span &other);
		~Span();

		// Member functions
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

		// Useless getter for debugging
		unsigned int getN();
};

#endif