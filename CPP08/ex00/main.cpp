/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 02:18:56 by nanasser          #+#    #+#             */
/*   Updated: 2026/10/27 02:18:56 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main()
{
	std::vector<int> num;
	std::list<int> values;
	std::vector<int>::iterator vector_it;
	std::list<int>::iterator list_it;

	num.push_back(2);
	num.push_back(4);
	num.push_back(6);
	num.push_back(7);

	values.push_back(22);
	values.push_back(34);
	values.push_back(6);
	values.push_back(17);

	try
	{
		vector_it = easyfind(num, 2);
		std::cout << "vector: found " << *vector_it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "vector: " << e.what() << std::endl;
	}

	try
	{
		vector_it = easyfind(num, 42);
		std::cout << "vector: found " << *vector_it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "vector: " << e.what() << std::endl;
	}

	try
	{
		list_it = easyfind(values, 6);
		std::cout << "list: found " << *list_it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "list: " << e.what() << std::endl;
	}

	try
	{
		list_it = easyfind(values, 67);
		std::cout << "list: found " << *list_it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "list: " << e.what() << std::endl;
	}

	return (0);
}