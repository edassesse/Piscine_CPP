/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:00:50 by edassess          #+#    #+#             */
/*   Updated: 2021/08/23 16:03:47 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie	*zombies[10];
	Zombie	*oui = new Zombie("oui");
	Zombie	*non = new Zombie("non");
	Zombie	*oui1 = new Zombie("oui1");
	Zombie	*oui2 = new Zombie("oui2");
	Zombie	*oui3 = new Zombie("oui3");
	oui->announce();
	non->announce();
	oui1->announce();
	oui2->announce();
	oui3->announce();
	randomChump("Bonjour");
	zombies[0] = zombieHorde(10, "comment");
	for (int i = 0; i < 10; i++)
		zombies[i]->announce();
	delete oui;
	delete non;
	delete oui1;
	delete oui2;
	delete oui3;
	return 1;
}
