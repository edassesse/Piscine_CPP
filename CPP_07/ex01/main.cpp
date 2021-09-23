/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:13:11 by user              #+#    #+#             */
/*   Updated: 2021/09/23 14:22:28 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};

	iter("test", 4, display);
	std::cout << "--" << std::endl;
	iter(tab, 5, display);
	return (0);
}*/

template< typename T >
void print(T &x)
{
	std::cout << x << std::endl; return;
}


	int main() {

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome tab2[5];

	iter(tab, 5, &print);
	iter(tab2, 5, &print);

	return 0;
	}
