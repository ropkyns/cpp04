/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:58 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 16:06:13 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>

class Animal
{
	protected :
		std::string _type;
	
	public :
		Animal();
		Animal(const Animal &A);
		virtual ~Animal();
		Animal &operator= (const Animal &A);

		virtual void	makeSound() const;
		std::string	getType() const;
};

#endif