/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:16:24 by user              #+#    #+#             */
/*   Updated: 2021/08/26 14:13:21 by user             ###   ########lyon.fr   */
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
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const n) :_bits(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n * (1 << this->_bits);
	return;
}

Fixed::Fixed(float const f) :_bits(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << this->_bits));
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
	this->_value = (float)(raw * (1 << this->_bits));
}

float	Fixed::toFloat(void)const
{
	return (float)this->_value / (float)(1 << this->_bits);
}

int		Fixed::toInt(void)const
{
	return (int)this->_value / (int)(1 << this->_bits);
}

Fixed	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs._value;
	return *this;
}

int		Fixed::operator>(Fixed const &rhs)const
{
	return (this->toFloat() > rhs.toFloat());
}

int		Fixed::operator<(Fixed const &rhs)const
{
	return (this->toFloat() < rhs.toFloat());
}

int		Fixed::operator>=(Fixed const &rhs)const
{
	return (this->toFloat() >= rhs.toFloat());
}

int		Fixed::operator<=(Fixed const &rhs)const
{
	return (this->toFloat() <= rhs.toFloat());
}

int		Fixed::operator==(Fixed const &rhs)const
{
	return (this->toFloat() == rhs.toFloat());
}

int		Fixed::operator!=(Fixed const &rhs)const
{
	return (this->toFloat() != rhs.toFloat());
}

float	Fixed::operator+(Fixed const &rhs)const
{
	return (this->toFloat() + rhs.toFloat());
}

float	Fixed::operator-(Fixed const &rhs)const
{
	return (this->toFloat() - rhs.toFloat());
}

float	Fixed::operator*(Fixed const &rhs)const
{
	return (this->toFloat() * rhs.toFloat());
}

float	Fixed::operator/(Fixed const &rhs)const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->_value = this->_value + 1;
	return this;
}

Fixed	&Fixed::operator--(void)
{
	this->_value = this->_value - 1;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
