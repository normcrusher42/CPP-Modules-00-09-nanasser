/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 01:25:48 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 01:59:49 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(void) : ClapTrap()
{
	this->hp = 100;
	this->ep = 100;
	this->atk = 30;
	std::cout << GRAY "FragTrap default constructor called" RESET << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 100;
	this->atk = 30;
	std::cout << GRAY "FragTrap constructor called with name: " RESET << name << std::endl;
	return;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << GRAY "FragTrap copy constructor called" RESET << std::endl;
	return;
}

// Assignment operator overload
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << GRAY "FragTrap assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hp = other.hp;
		this->ep = other.ep;
		this->atk = other.atk;
	}
	return (*this);
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << GRAY "FragTrap destructor called" RESET << std::endl;
	return;
}

// member functions
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name <<": mid-war HIGH FIVE GANG :DD\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->ep == 0)
		std::cout << "FragTrap " << this->name << " cannot be Repaired! No Energy points.\n";
	else if (this->hp == 0)
		std::cout << "FragTrap " << this->name << " cannot be Repaired! Already dead.\n";
	else if (this->hp == 100)
		std::cout << "FragTrap " << this->name << " cannot be Repaired! Already at 100 health points.\n";
	else if (this->hp + amount > 100)
		std::cout << "FragTrap " << this->name << " cannot be Repaired! Amount greator than required.\n";
	else
	{
		this->hp += amount;
		this->ep--;
		std::cout << "FragTrap " << this->name << " repairs by " << amount << " health points. Total points: " << this->hp << std::endl;
	}
}
