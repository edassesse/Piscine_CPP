/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:16:24 by user              #+#    #+#             */
/*   Updated: 2021/08/25 17:09:05 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0), _bits(8)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src) :_bits(8)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Fixed::getRawBits(void)const
{
	return (float)this->_value / (float)(1 << this->_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = (raw * (1 << this->_bits));
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs._value;
	return *this;
}
