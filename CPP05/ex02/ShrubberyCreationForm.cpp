/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 01:28:16 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/08 01:28:16 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//									//
//		Constructors/Destructor		//
//									//

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("bebyboi", 145, 137)
{
	std::cout << GRAY "ShrubberyCreationForm default constructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("big boi", 145, 137), _target(target)
{
	std::cout << GRAY "ShrubberyCreationForm constructor " BWHITE << this->getName() << GRAY " with sign and execute grades " BWHITE << this->getSignGrade() << GRAY " and " BWHITE << this->getExecGrade() << GRAY " called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	std::cout << GRAY "ShrubberyCreationForm copy constructor called" RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << GRAY "ShrubberyCreationForm assignment operator called" RESET << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GRAY "ShrubberyCreationForm destructor " BWHITE << this->getName() << GRAY " called" RESET << std::endl;
}

//		Member Functions		//

void	ShrubberyCreationForm::executeAction() const
{
	std::string		target_name = this->_target + "_Shrubbery";
	std::ofstream	not_pdf_file(target_name.c_str());

	if (!not_pdf_file.is_open())
	{
		std::cout << RED "File creation failed. Could be a permissions issue." RESET << std::endl;
		return ;
	}
	else
	{
		not_pdf_file << "                               +++                " << '\n'
					 << "                               +++                " << '\n'
					 << "                             ++###+++             " << '\n'
					 << "                            +########+            " << '\n'
					 << "                            +########+            " << '\n'
					 << "                +++  +++++++*########+            " << '\n'
					 << "               +(((++########**(###***++          " << '\n'
					 << "               +(((++########**(###***++          " << '\n'
					 << "             ++(((*############*((*#####+         " << '\n'
					 << "       ++++++++((((*****((###((***(######++       " << '\n'
					 << "       ++++++++((((*****((###((***(######++       " << '\n'
					 << "      +((((((((+**(((*****(((***((#########+      " << '\n'
					 << "      +((((((((+**(((*****(((***((#########+      " << '\n'
					 << "    ++((((((((((++***(((**********(*****####++    " << '\n'
					 << "      ++++**(((***((((((**(((*********((*###++    " << '\n'
					 << "      ++++**(((***((((((**(((*********((*###++    " << '\n'
					 << "       +++++***+**###(**((((#(((***((((((**#++    " << '\n'
					 << "    +++***+++++*#####(**#######***(((####((+      " << '\n'
					 << "    +++***+++++*#####(**#######***(((####((+      " << '\n'
					 << "   +******++***+**###*#######*****(########*++    " << '\n'
					 << "   +(((**+***((***#***####*********########*((+   " << '\n'
					 << "   +(((**+***((***#***####*********########*((+   " << '\n'
					 << " ++((((**+((((((++****####***((((((**######*(((++ " << '\n'
					 << "   ,(((++((((((++++++*##****(((###(*****###*(((++ " << '\n'
					 << "   ,(((++((((((++++++*##****(((###(*****###*(((++ " << '\n'
					 << "   ,((+++(((+++++++++(******(######**+******++(++ " << '\n'
					 << "   ,((+++(((+++++++++(******(######**+******++(++ " << '\n'
					 << "    ,,+++(((+++***+(((((**++*#####*++***((((**+   " << '\n'
					 << "    ,,+++(+++***(((++(((++(((**#**+++*((((((((+   " << '\n'
					 << "    ,,+++(+++***(((++(((++(((**#**+++*((((((((+   " << '\n'
					 << "   ,++++++,,+**((((++(++++(((++*++++++((((((((+   " << '\n'
					 << "   ,***+++,,+++((((+++++++(((+++******++((((((+   " << '\n'
					 << "   ,***+++,,+++((((+++++++(((+++******++((((((+   " << '\n'
					 << " ,,****++,+++**+((+***++++((+++***(((*+++++(((+   " << '\n'
					 << "   ,***++,******++****++,,++*++*((((((++***+++    " << '\n'
					 << "   ,***++,******++****++,,++*++*((((((++***+++    " << '\n'
					 << "   ,**,,,******,,,,***,,*******+(((((+******,,    " << '\n'
					 << "   ,**,,,******,,,,***,,*******+(((((+******,,    " << '\n'
					 << "    ,, ,,***,,,,,,,**,,,****,,,,++(++*******,,    " << '\n'
					 << "       ,,***,,,++++,,,,,****,,,++++++,******,,    " << '\n'
					 << "       ,,***,,,++++,,,,,****,,,++++++,******,,    " << '\n'
					 << "       ,,*,,,+++***++,,,**,,,+++***++,,,,***,,    " << '\n'
					 << "         ,  ,++******,'',,,,,++******,,, ,,,      " << '\n'
					 << "         ,  ,++******,'',,,,,++******,,, ,,,      " << '\n'
					 << "             ,,****,,'''''$$',,****,,             " << '\n'
					 << "          &&&&&,**,&&)''$$!!$!!,**,               " << '\n'
					 << "          &&&&&,**,&&)''$$!!$!!,**,               " << '\n'
					 << "         &&&&&&&,,&&&)''!!!!$))%,,                " << '\n'
					 << "            &&&&&&&&&&)))))))&&                   " << '\n'
					 << "            &&&&&&&&&&)))))))&&                   " << '\n';
	}
	not_pdf_file.close();
}


// std::ostream	&operator<<(std::ostream &output, const ShrubberyCreationForm &rhs)
// {
// 	return (output << rhs.getName() << ", Form sign grade "<< rhs.getSignGrade() << ", can execute at " << rhs.getExecGrade() << ".");
// }