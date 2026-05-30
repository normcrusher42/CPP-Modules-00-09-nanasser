/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 01:25:51 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 01:26:07 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap test("tank");
	test.attack("giant laser");
	test.takeDamage(50);
	test.beRepaired(50);

	std::cout << "\n";
	FragTrap hello("jester");
	hello.beRepaired(10);
	hello.takeDamage(10);
	hello.beRepaired(10);

	std::cout << "\n";
	hello.highFivesGuys();
}