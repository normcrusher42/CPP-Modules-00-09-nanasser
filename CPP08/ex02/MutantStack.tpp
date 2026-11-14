/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 02:32:46 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/10 02:32:46 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) : std::stack<T>(copy)
{}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
typename	MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename	MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename	MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return (this->c.begin());
}

template <typename T>
typename	MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return (this->c.end());
}

template <typename T>
typename	MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename	MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>
typename	MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{
	return (this->c.rbegin());
}

template <typename T>
typename	MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{
	return (this->c.rend());
}
