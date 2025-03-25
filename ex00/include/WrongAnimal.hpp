/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:15:45 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 16:16:44 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>

class WrongAnimal
{
	protected :
		std::string _type;
	
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &A);
		~WrongAnimal();
		WrongAnimal &operator= (const WrongAnimal &A);

		void	makeSound() const;
		std::string	getType() const;
};

#endif