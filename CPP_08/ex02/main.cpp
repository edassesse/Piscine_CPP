/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:31:38 by edassess          #+#    #+#             */
/*   Updated: 2021/09/23 18:49:35 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int main()
{
	mutantstack<int> mutantstack;
	mutantstack.push(21);
	mutantstack.push(22);
	mutantstack.push(24);
	mutantstack.push(25);

}
