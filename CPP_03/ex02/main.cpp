/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:37:32 by edassess          #+#    #+#             */
/*   Updated: 2021/08/28 20:31:50 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	oui("oui");
	ScavTrap	non("non");
	FragTrap	peut_etre("peut_etre");

	oui.attack("bonjour");
	oui.takeDamage(15);
	oui.beRepaired(15);
	non.attack("bonjour");
	non.takeDamage(15);
	non.beRepaired(15);
	non.guardGate();
	peut_etre.highFivesGuys();
}
