/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:06 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/28 14:33:56 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::Dog(const Dog &A) : Animal()
{
	this->_type = A._type;
	this->_brain = new Brain(*A._brain);
	std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog : Destructor called" << std::endl;
}

Dog &Dog::operator= (const Dog &A)
{
	if (this != &A)
	{
		this->_type = A._type;
		delete _brain;
		this->_brain = new Brain(*A._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOOOOOOOF" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}