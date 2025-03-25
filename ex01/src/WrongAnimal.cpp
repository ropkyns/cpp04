/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:14:39 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 16:15:21 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &A)
{
	this->_type = A._type;
	std::cout << "WrongAnimal : Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &A)
{
	this->_type = A._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This is a WrongANIMAL" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}