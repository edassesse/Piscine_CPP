/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 11:37:32 by edassess          #+#    #+#             */
/*   Updated: 2021/09/17 12:30:38 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "----------------" << std::endl;
	ClapTrap	peut_etre;
	ClapTrap	oui("oui");
	ClapTrap	*non;

	non = new ClapTrap("non");
	non->attack("bye");
	non->takeDamage(120);
	non->beRepaired(10);
	delete non;
	std::cout << "----------------" << std::endl;
	non = &oui;
	oui.attack("bonjour");
	oui.takeDamage(15);
	oui.beRepaired(15);
	std::cout << "----------------" << std::endl;
	non->attack("bye");
	std::cout << "----------------" << std::endl;
}
