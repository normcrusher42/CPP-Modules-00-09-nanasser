/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 02:56:37 by nanasser          #+#    #+#             */
/*   Updated: 2026/05/31 02:56:38 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();

		void makeSound() const;

		std::string getIdea(unsigned int index) const;
		void setIdea(unsigned int index, const std::string& idea);
};

#endif