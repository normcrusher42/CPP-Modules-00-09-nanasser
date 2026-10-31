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

# ifndef RESET
#  define RESET "\033[0m"
# endif
# ifndef RED
#  define RED "\033[0;31m"
# endif

class Span
{
	private:
		unsigned int N_;
	public:
		Span();
		Span(const Span &copy);
		Span	&operator=(const Span &other);
		~Span();
};

#endif