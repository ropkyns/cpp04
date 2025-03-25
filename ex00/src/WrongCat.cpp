/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:18:09 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 17:26:01 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat : Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &A)
{
	this->_type = A._type;
	std::cout << "WrongCat : Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor called" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &A)
{
	this->_type = A._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WRONG MEEWWWOOOOOOOOOOO" << std::endl;
}