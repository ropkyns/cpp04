/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:52:21 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/28 12:57:49 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : default constructor called" << std::endl;
}

Brain::Brain(const Brain &B)
{
	*this = B;
	std::cout << "Brain : copy constructor called" << std::endl;
}

Brain &Brain::operator= (const Brain &B)
{
	if (this != &B)
	{
		for (int i = 0; i < 0; i++)
			this->_ideas[i] = B._ideas[i];
	}
	std::cout << "Brain : assignement operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called" << std::endl;
}

void	Brain::setIdea(int index, const std::string &idea)
{
	if (index < 0 || index >= 100)
		std::cout << "Brain : please give an index between 0 and 99" << std::endl;
	else
	{
		this->_ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		std::cout << "Brain : please give an index between 0 and 99" << std::endl;
	else
		return (this->_ideas[index]);
	return ("");
}
