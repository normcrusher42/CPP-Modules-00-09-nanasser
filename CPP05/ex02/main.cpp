/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/08 03:24:02 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat	gentlemen("Speed", 5);
	ShrubberyCreationForm bob("Home");
	gentlemen.signForm(bob);

	gentlemen.executeForm(bob); // should fail
	return (0);
}
