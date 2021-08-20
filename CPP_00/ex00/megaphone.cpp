/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 03:16:20 by user              #+#    #+#             */
/*   Updated: 2021/08/20 05:54:11 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	if (ac > 1)
	{
		while (av[++j])
		{
			i = -1;
			while (av[j][++i])
				std::cout << (char)toupper(av[j][i]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE NOISE *";
	std::cout << std::endl;
	return (0);
}
