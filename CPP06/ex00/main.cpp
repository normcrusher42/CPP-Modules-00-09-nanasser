/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/04 21:25:45 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (std::cerr << "Larp one more time and you might get something 😀" << std::endl, 0);
	else if (ac > 2)
		return (std::cerr << "Larp less and and you might get facts 😀" << std::endl, 0);
	ScalarConverter::convert(av[1]);
	return (0);
}
