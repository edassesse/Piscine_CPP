/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:13:23 by user              #+#    #+#             */
/*   Updated: 2021/09/22 16:37:14 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include <sys/time.h>

Base	*generate(void)
{
	int	n = rand() % 100;
	if (n > 66)
	{
		std::cout << "generate = A" << std::endl;
		return new A;
	}
	if (n > 33)
	{
		std::cout << "generate = B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "generate = C" << std::endl;
		return new C;
	}
}

void	identify(Base *p)
{

	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	Base	tmp;
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			tmp = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &bc)
		{
			try
			{
				tmp = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &bc)
			{
				std::cout << "Neither A, nor B, nor C" << std::endl;
			}
		}
	}
}

int main()
{
	std::cout << "--------------------------" << std::endl;
	Base *test = generate();
	identify(test);
	identify(*test);
	Base *test1 = generate();
	identify(test1);
	identify(*test1);
	Base *test2 = generate();
	identify(test2);
	identify(*test2);
	Base *test3 = generate();
	identify(test3);
	identify(*test3);
	std::cout << "--------------------------" << std::endl;
	return 0;
}
