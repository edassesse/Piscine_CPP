/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:21:54 by edassess          #+#    #+#             */
/*   Updated: 2021/09/20 11:55:12 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Animal *animals[100];

	std::cout << "----------------" << std::endl;
	for (int i = 0; i < 100 ;i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "----------------" << std::endl;
	}
	std::cout << "\n\n\n\n" << std::endl;
	*animals[0] = *animals[1];
	std::cout << "\n\n\n\n" << std::endl;
	std::cout << "----------------" << std::endl;
		for (int i = 0; i < 100; i++)
		{
			delete animals[i];
			std::cout << "----------------" << std::endl;
		}
}
