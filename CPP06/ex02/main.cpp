/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 02:50:30 by nanasser          #+#    #+#             */
/*   Updated: 2026/09/08 02:50:30 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base	*generate(void)
{
	int	choice = std::rand() % 3;

	switch (choice)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			break ;
	}
	return (0);
}

void	identify(Base* p)
{
	if (p == NULL) // just to be safe~
		{std::cout << "Error: Null pointer" << std::endl; return ;}

	if (dynamic_cast<A*>(p))
		std::cout << "A" << '\n';
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << '\n';
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << '\n';
	else
		std::cout << "It's none of the above! HOW DID YOU GET HERE??? HOW DID YOU FUMBLE THIS HARD- YOU HAD ONE JOB" << std::endl;

}

void	identify(Base& p)
{
	try
	{
		A &type_A = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(type_A);
	}
	catch (std::exception &e){}
	try
	{
		B &type_B = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(type_B);
	}
	catch (std::exception &e){}
	try
	{
		C &type_C = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(type_C);
	}
	catch (std::exception &e){}
}

int	main()
{
	std::srand(std::time(NULL));

	Base *type = generate();
	if (!type) // no type found
		return (1);
	identify(type);
	identify(*type);
	delete type;
	for (int i = 0; i < 2; i++)
	{
		Base	*t = generate();
		if (!t)
			return (1);
		identify(t);
		identify(*t);
		delete t;
	}
	return (0);
}