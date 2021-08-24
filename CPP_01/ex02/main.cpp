/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:30:53 by edassess          #+#    #+#             */
/*   Updated: 2021/08/23 17:46:54 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		brains = "HI THIS IS BRAINS";

	std::string*	brainsPtr = &brains;
	std::string&	brainsRef = brains;

	std::cout << "string address == " << &brains << std::endl;
	std::cout << "Ptr address == " << &brainsPtr << std::endl;
	std::cout << "Ref address == " << &brainsRef << std::endl;
	std::cout << "string value == " << brains << std::endl;
	std::cout << "Ptr value == " << *brainsPtr << std::endl;
	std::cout << "Ref value == " << brainsRef << std::endl;
}
