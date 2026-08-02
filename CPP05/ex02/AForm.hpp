/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 22:42:26 by nanasser          #+#    #+#             */
/*   Updated: 2026/08/02 22:42:26 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

# ifndef SIGNED
#  define SIGNED true
# endif
# ifndef UNSIGNED
#  define UNSIGNED false
# endif

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_issigned;
		const int			_signgrade;
		const int			_execgrade;
	public:
	// Constructors & Destructor
		AForm();
		AForm(const AForm &other);
		AForm(const std::string &name, const int signgrade, const int execgrade);
		AForm &operator=(const AForm &other);
		~AForm();
	// Member Functions
		std::string			getName() const;
		bool				getSignStatus() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat &bureaucrat);
	// Custom Exception classes
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &output, const AForm &rhs);


#endif