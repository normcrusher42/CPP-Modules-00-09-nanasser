/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:48:17 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/10 03:02:25 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <ctime>

int main()
{
    // Seed the randomizer for RobotomyRequestForm
    std::srand(std::time(NULL));

    Intern      someRandomIntern;
    Bureaucrat  boss("Boss", 1);
    Bureaucrat  internBureaucrat("Low Grade Bob", 150);

    std::cout << "\n | --- 1. Creating & Executing ShrubberyCreationForm --- | \n";
    AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "Garden");
    if (shrub)
    {
        std::cout << *shrub << std::endl;
        boss.signForm(*shrub);
        boss.executeForm(*shrub);
        delete shrub;
    }

    std::cout << "\n | --- 2. Creating & Executing RobotomyRequestForm --- | \n";
    AForm* robo = someRandomIntern.makeForm("robotomy request", "Bender");
    if (robo)
    {
        std::cout << *robo << std::endl;
        boss.signForm(*robo);
        boss.executeForm(*robo);
        boss.executeForm(*robo); // Multi-run to test 50% random success rate
        delete robo;
    }

    std::cout << "\n | --- 3. Creating & Executing PresidentialPardonForm --- | \n";
    AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
    if (pardon)
    {
        std::cout << *pardon << std::endl;
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        delete pardon;
    }

    std::cout << "\n | --- 4. Testing Grade Exceptions During Signing & Execution --- | \n";
    AForm* strictForm = someRandomIntern.makeForm("presidential pardon", "Ford Prefect");
    if (strictForm)
    {
        internBureaucrat.signForm(*strictForm);    // Should fail (Grade 150 vs 25)
        boss.signForm(*strictForm);                // Signs form
        internBureaucrat.executeForm(*strictForm); // Should fail (Grade 150 vs 5)
        delete strictForm;
    }

    std::cout << "\n | --- 5. Testing Invalid Form Name (Null Guard Check) --- | \n";
    AForm* invalid = someRandomIntern.makeForm("coffee request", "Kitchen");
    if (invalid)
    {
        boss.signForm(*invalid);
        delete invalid;
    }
    else
    {
        std::cout << "Main safely caught NULL pointer for non-existent form!\n";
    }

    std::cout << "\n | --- Destruction & Exit --- | \n";
    return 0;
}
