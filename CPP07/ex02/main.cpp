/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 01:03:32 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/17 01:05:28 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught on bad index: " << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Caught on MAX_VAL: " << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	Array<int> empty;
	std::cout << "Empty size: " << empty.size() << std::endl; // Must be 0
	try
	{
	    empty[0] = 42; // Must throw
	}
	catch (const std::exception &e)
	{
	    std::cout << "Caught on empty: " << e.what() << std::endl;
	}
	Array<int> zeroed(5);
	for (unsigned int i = 0; i < zeroed.size(); ++i)
	    std::cout << zeroed[i] << " "; // Must all be 0
	std::cout << std::endl;

	const Array<int> constArr(numbers);
	std::cout << "Const read: " << constArr[0] << std::endl; // Must compile and read cleanly

	std::cout << constArr.size() << std::endl;

    delete [] mirror;
    return 0;
}