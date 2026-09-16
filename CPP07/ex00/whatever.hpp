/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 21:49:51 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/16 21:49:51 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename S>

void	swap(S &a, S &b)
{
	S	temp(a);

	a = b;
	b = temp;
}

template <typename T>

T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	else if (b < a)
		return (b);
	return (b);
}

template <typename T>

T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	else if (b > a)
		return (b);
	return (b);
	// return ((a < b) ? b : a); just so you know, I know how this works too. But I like readability this time and C nostalgia bait.
}

#endif