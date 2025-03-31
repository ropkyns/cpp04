/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:51:16 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/28 13:01:37 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private :
		std::string _ideas[100];
	public :
		Brain();
		Brain(const Brain &A);
		~Brain();
		Brain &operator= (const Brain &A);
		void		setIdea(int index, const std::string &idea);
		std::string	getIdea(int index) const;
};


#endif