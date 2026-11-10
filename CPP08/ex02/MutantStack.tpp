/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 02:32:46 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/10 02:32:46 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	(*this) = copy;
}

template <typename T>
MutantStack<T>	&MutantStack::operator=(const MutantStack &other)
{
	// smth we gotta do ig
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

typedef typename std::stack<T>::container_type::iterator iterator;
typedef typename std::stack<T>::container_type::const_iterator const_iterator;
typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

