/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 02:32:55 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/10 02:32:55 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>
# include <vector>
# include <list>

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

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack &operator=(const MutantStack &other);
		~MutantStack();
}

# include "MutantStack.tpp"

#endif