/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:03 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/28 14:24:29 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat : Default constructor called" << std::endl;
}

Cat::Cat(const Cat &A) : Animal()
{
	this->_type = A._type;
	this->_brain = new Brain(*A._brain);
	std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat : Destructor called" << std::endl;
}

Cat &Cat::operator= (const Cat &A)
{
	if (this != &A)
	{
		this->_type = A._type;
		delete this->_brain;
		this->_brain = new Brain(*A._brain);
	}
	std::cout << "Cat : Assignement operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEEWWWOOOOOOOOOOO" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}