/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:22:57 by edassess          #+#    #+#             */
/*   Updated: 2021/09/06 19:29:28 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

	Zombie*	zombieHorde(int n, std::string name)
{
	if (n > 0)
	{
	Zombie	*new_zombies = new Zombie[n];
		for (int i = 0; i < n; i++)
			new_zombies[i].setName(name);
	return new_zombies;
	}
	return nullptr;
}
