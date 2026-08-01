/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 04:22:24 by nanasser          #+#    #+#             */
/*   Updated: 2026/07/29 04:22:24 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# ifndef SIGNED
#  define SIGNED true
# endif
# ifndef UNSIGNED
#  define UNSIGNED false
# endif

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_issigned;
		const int			_signgrade;
		const int			_execgrade;
	public:
	// Constructors & Destructor
		Form();
		Form(const Form &other);
		Form(const std::string &name, const int signgrade, const int execgrade);
		Form &operator=(const Form &other);
		~Form();
	// Member Functions
		const std::string	getName() const;
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

std::ostream	&operator<<(std::ostream &output, const Form &rhs);


#endif