/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:12:16 by user              #+#    #+#             */
/*   Updated: 2021/09/23 10:35:33 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>

int main(int ac, char **av)
{
	std::string	s;
	float		f;
	int			i;
	char		c;
	double		d;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments: './CPP_06 <litteral value>" << std::endl;
		return 0;
	}
	s = av[1];
	if (s.size() == 1 && !isdigit(s[0]))
	{
		c = s[0];
		d = c;
	}
	else
	{
		try
		{
			d = std::stod(s);
		}
		catch (std::exception &e)
		{
			std::cout << "Not a valid value" << std::endl;
			return 0;
		}
	}
	i = static_cast<int>(d);
	c = static_cast<char>(d);
	f = static_cast<float>(d);
	if (std::numeric_limits<char>::max() < d || std::numeric_limits<char>::lowest() > d || isnan(d))
		std::cout << "char: impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (std::numeric_limits<int>::max() < d || std::numeric_limits<int>::lowest() > d || isnan(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
