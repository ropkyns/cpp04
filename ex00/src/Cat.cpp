/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:03 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 16:09:02 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat : Default constructor called" << std::endl;
}

Cat::Cat(const Cat &A) : Animal()
{
	this->_type = A._type;
	std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor called" << std::endl;
}

Cat &Cat::operator= (const Cat &A)
{
	this->_type = A._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEEWWWOOOOOOOOOOO" << std::endl;
}