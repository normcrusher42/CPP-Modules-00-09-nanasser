/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 22:28:41 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/16 22:28:41 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	replace(std::string &str)
{
	if (!str.find("Love"))
		str = "Hate";
}

void	printInt(int n)
{
	std::cout << n << std::endl;
}

int main()
{
	int	numbers [] = {1, 2, 3, 4, 5};

	::iter(numbers, 5, printInt);

	std::cout << '\n';

	std::string doodles[] = {"I", "Love", "Gambling"};

	::iter(doodles, 3, replace);
	for (int i = 0; i < 3; i++)
		std::cout << doodles[i] << std::endl;
}