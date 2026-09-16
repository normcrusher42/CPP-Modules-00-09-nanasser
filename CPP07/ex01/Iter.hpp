/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 22:29:03 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/16 22:29:03 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename Tarr, typename Tfunc>

void	iter(Tarr *arr, const size_t len, Tfunc func)
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif