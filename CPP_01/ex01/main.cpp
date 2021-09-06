/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:00:50 by edassess          #+#    #+#             */
/*   Updated: 2021/08/27 18:32:33 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*zombies;
	Zombie *zombies_horde;
	zombies->randomChump("Bonjour");
	zombies_horde = zombies_horde->zombieHorde(10, "comment");
	for (int i = 0; i < 10; i++)
		zombies_horde[i].announce();
	delete []zombies_horde;
	return 0;
}
