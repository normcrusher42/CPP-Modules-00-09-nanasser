/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 23:18:28 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/16 23:18:28 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]()), _size(n)
{}

template <typename T>
Array<T>::Array(const Array &other) : _arr(new T[other._size]()), _size(other._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] _arr;
		new T[other._size]();
		_size = other._size;
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = other._arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T>
T       &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw OutOfBoundsException();
	return (_arr[index]);
}

template <typename T>
const T       &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw OutOfBoundsException();
	return (_arr[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return (RED "Index Out of Bounds!" RESET);
}
