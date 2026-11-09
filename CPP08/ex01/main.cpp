/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:06:13 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/01 01:06:13 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) // Container too small error
	{
		std::cerr << e.what() << '\n';
	}

	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(12);
	}
	catch(const std::exception& e) // Cant add more error
	{
		std::cerr << e.what() << '\n';
	}

	Span				bigNums(100000);
	std::vector<int>	nums;
	std::srand(time(NULL));
	for (int i = 0; i < 100000; i++) // random nums
	{
		int random_int = rand() % 1000000000;
		nums.push_back(random_int);
	}
	try
	{
		bigNums.addRange(nums.begin(), nums.end());
		std::cout << "shortest span: " << bigNums.shortestSpan() << std::endl;
		std::cout << "longest span: " << bigNums.longestSpan() << std::endl;
	}
	catch (std::exception &e) // should be fine cs its within N size & cant be too small
	{
		std::cout << e.what() << std::endl;
	}
}
