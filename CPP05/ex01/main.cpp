/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/02 01:05:04 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    /* Normal Form (Default values) */
    Form defaultForm;
    std::cout << defaultForm << "\n";
    ///////////////////////

    /* Valid Custom Form Creation */
    try
    {
        Form taxForm("Tax Form 28B", 50, 25);
        std::cout << taxForm << "\n";
    }
    catch (std::exception &e)
    {
        std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
    }
    ///////////////////////

    /* Invalid Form Grade Creation (Too High / Too Low) */
    try
    {
        Form impossibleForm("Super Classified", 0, 10);
        std::cout << impossibleForm << "\n";
    }
    catch (std::exception &e)
    {
        std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
    }

    try
    {
        Form uselessForm("Trash Permit", 151, 150);
        std::cout << uselessForm << "\n";
    }
    catch (std::exception &e)
    {
        std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
    }
    ///////////////////////

    /* Successful Signing Test */
    try
    {
        Bureaucrat boss("Gregory", 1);
        Form permit("Building Permit", 10, 5);

        std::cout << permit << "\n";
        boss.signForm(permit);
        std::cout << permit << "\n";
    }
    catch (std::exception &e)
    {
        std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
    }
    ///////////////////////

    /* Failed Signing Test (Grade too low) */
    try
    {
        Bureaucrat intern("Steve", 100);
        Form topSecret("Nuclear Launch Code", 5, 1);

        std::cout << topSecret << "\n";
        intern.signForm(topSecret); // signForm internally catches the exception and prints message!
        std::cout << topSecret << "\n";
    }
    catch (std::exception &e)
    {
        std::cerr << BRED "Exception Caught: " << RESET << e.what() << std::endl;
    }
    ///////////////////////

    return (0);
}

/* things to research before continuing later:
why is destructor not called after exception?
when exception is found, is rest of the try block skipped?*/