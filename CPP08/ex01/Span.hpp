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

# include <algorithm>
# include <iostream>
# include <iterator>
# include <vector>

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
		std::vector<int>	arr_;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator=(const Span &other);
		~Span();

		// Member functions
		void	addNumber(int num);
		template <typename InputIterator>
		void	addRange(InputIterator start, InputIterator end);
		int		longestSpan() const;
		int		shortestSpan() const;

		// Useless getter for debugging
		unsigned int	getN() const;
		class TooManyElementsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class InvalidSizeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

template <typename InputIterator>
void	Span::addRange(InputIterator start, InputIterator end)
{
	if (arr_.size() + static_cast<size_t>(std::distance(start, end)) > N_)
		throw TooManyElementsException();
	arr_.insert(arr_.end(), start, end);
}

#endif