/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:56:14 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 03:41:52 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// unccoment to throw error
	// const Animal *meta = new Animal();
	// meta->makeSound();
	// delete meta;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();

	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal *noCat = new WrongCat();
	noCat->makeSound();

	const WrongAnimal *noAn = new WrongAnimal();
	noAn->makeSound();

	delete noCat;
	delete noAn;
	return 0;
}