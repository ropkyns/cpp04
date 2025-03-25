/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:06 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 16:09:32 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::Dog(const Dog &A) : Animal()
{
	this->_type = A._type;
	std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor called" << std::endl;
}

Dog &Dog::operator= (const Dog &A)
{
	this->_type = A._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOOOOOOOF" << std::endl;
}