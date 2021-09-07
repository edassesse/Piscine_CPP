/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:00:50 by edassess          #+#    #+#             */
/*   Updated: 2021/09/06 19:21:59 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
int main()
{
	Zombie	oui;
	Zombie	*non = new Zombie("non");
	Zombie	*oui1 = new Zombie("oui1");
	Zombie	*oui2 = new Zombie("oui2");
	Zombie	*random = newZombie("oui4");

	oui.announce();
	randomChump("ROBERT");
	non->announce();
	oui1->announce();
	oui2->announce();
	random->announce();
	delete non;
	delete oui1;
	delete oui2;
	delete random;
	return 0;
}
