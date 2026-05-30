/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:56:21 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 02:56:24 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const;

		std::string getIdea(unsigned int index) const;
		void setIdea(unsigned int index, const std::string &idea);
};

#endif