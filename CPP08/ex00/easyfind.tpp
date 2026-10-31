/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:20:58 by nanasser          #+#    #+#             */
/*   Updated: 2026/10/27 02:20:58 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
typename T::iterator	easyfind(T &container, int find)
{
	typename T::iterator	result;

	result = std::find(container.begin(), container.end(), find);
	if (result == container.end())
		throw NotFoundException();
	return (result);
}
