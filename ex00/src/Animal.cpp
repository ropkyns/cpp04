/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:00 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 15:16:44 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &A)
{
	this->_type = A._type;
	std::cout << "Animal : Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor called" << std::endl;
}

Animal &Animal::operator= (const Animal &A)
{
	this->_type = A._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "This is an ANIMAL" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}