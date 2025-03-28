/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:48:03 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/28 14:26:57 by paulmart         ###   ########.fr       */
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

		void	makeSound(void) const;
		Brain	*getBrain() const;
};

#endif