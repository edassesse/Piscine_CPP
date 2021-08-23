/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:00:50 by edassess          #+#    #+#             */
/*   Updated: 2021/08/23 17:27:49 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie	*zombies;
	randomChump("Bonjour");
	zombies = zombieHorde(10, "comment");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete []zombies;
	return 1;
}
