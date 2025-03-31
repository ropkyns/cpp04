/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:47:08 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/31 10:36:23 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	const Animal* animals[4];
	// animals[0]->makeSound();
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();
	std::cout << std::endl;
	
	for (int i=0; i < 4; i++)
		animals[i]->makeSound();
	std::cout << std::endl;

	
	// Dog	dog1;
	// dog1.getBrain()->setIdea(0, "i could pee on this street lamp");
	// std::cout << "dog1 idea 0 : " << dog1.getBrain()->getIdea(0) << std::endl;
	// std::cout << "dog1 idea 1 : " << dog1.getBrain()->getIdea(1) << std::endl;
	// std::cout << std::endl;

	// Cat	cat1;
	// cat1.getBrain()->setIdea(0, "i could be the cutest creature on earth");
	// std::cout << "cat1 idea 0 : " << cat1.getBrain()->getIdea(0) << std::endl;
	// std::cout << "cat1 idea 1 : " << cat1.getBrain()->getIdea(1) << std::endl;
	// std::cout << std::endl;

	for (int i=0; i < 4; i++)
		delete animals[i];

	return 0;
}

