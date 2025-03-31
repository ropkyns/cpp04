/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:48:00 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/31 09:57:42 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain	*_brain;
	public :
		Cat();
		Cat(const Cat &A);
		~Cat();
		Cat &operator= (const Cat &A);

		virtual void	makeSound(void) const;
		Brain	*getBrain() const;
};

#endif