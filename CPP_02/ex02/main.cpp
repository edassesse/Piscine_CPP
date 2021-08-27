/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:18:43 by edassess          #+#    #+#             */
/*   Updated: 2021/08/27 11:34:18 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
Fixed a;
Fixed b(Fixed(5.05f) * Fixed(2));
std::cout << a << std::endl;
std::cout << --a << std::endl;
std::cout << a << std::endl;
std::cout << a-- << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max(a, b) << std::endl;
return 0;
}
