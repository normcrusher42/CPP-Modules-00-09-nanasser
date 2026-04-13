/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 21:04:43 by nanasser          #+#    #+#             */
/*   Updated: 2026/04/13 21:04:43 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <new>

int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Argument format: ./gnlpp <filename> <find> <replace>" << std::endl, 1);
}
