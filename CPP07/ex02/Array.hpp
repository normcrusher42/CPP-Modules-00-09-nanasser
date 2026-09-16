/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 23:08:01 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/16 23:08:01 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# ifndef RESET
#  define RESET "\033[0m"
# endif
# ifndef RED
#  define RED "\033[0;31m"
# endif

template <typename T>
class Array
{
	private:
		T			*_arr;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		T       &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;

		unsigned int	size() const;
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

# include "Array.tpp"

#endif