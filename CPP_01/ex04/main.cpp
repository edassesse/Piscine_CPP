/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:50:33 by edassess          #+#    #+#             */
/*   Updated: 2021/08/24 15:54:42 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	replace(std::string file_name, std::string s1, std::string s2)
{
	std::ifstream	ifs(file_name);
	std::stringstream		file;
	std::string				n_string;
	std::ofstream			ofs(file_name + ".replace");
	size_t			index;

	file << ifs.rdbuf();
	n_string = file.str();
	index = file.str().find(s1);
	while (index != std::string::npos)
	{
		n_string.erase(index, s1.size());
		n_string.insert(index, s2);
		index = n_string.find(s1);
	}
	ofs << n_string;
	std::cout << n_string << std::endl;
}

int main(int ac, char **av)
{
	std::string	file_name;
	std::string	s1;
	std::string	s2;

	if (ac != 4)
	{
		std::cout << "./replace FILENAME S1 S2" << std::endl;
		return 0;
	}
	file_name = av[1];
	s1 = av[2];
	s2 = av[3];
	replace(file_name, s1, s2);
	return 1;
}
