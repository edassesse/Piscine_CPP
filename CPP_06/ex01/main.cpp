/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:41:13 by user              #+#    #+#             */
/*   Updated: 2021/09/21 18:56:17 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct	Data
{
	std::string	bonjour;
	int			ok;
};

uintptr_t	serialize(Data *raw)
{
	return reinterpret_cast<uintptr_t>(raw);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data	*d = new Data;
	Data	*tmp;
	uintptr_t	raw;

	d->bonjour = "bonjour";
	d->ok = 42;
	std::cout << d->bonjour << std::endl;
	std::cout << d->ok << std::endl;
	std::cout << "--------------" << std::endl;
	raw = serialize(d);
	std::cout << raw << std::endl;
	tmp = deserialize(raw);
	std::cout << tmp << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << tmp->bonjour << std::endl;
	std::cout << tmp->ok << std::endl;
}
