/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:48:03 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/31 09:59:24 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *_brain;
	public :
		Dog();
		Dog(const Dog &A);
		~Dog();
		Dog &operator= (const Dog &A);

		virtual void makeSound(void) const;
		Brain *getBrain() const;
};

#endif