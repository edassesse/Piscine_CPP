/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:33:44 by user              #+#    #+#             */
/*   Updated: 2021/09/14 14:58:56 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = nullptr;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = nullptr;
	*this = rhs;
	return;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
	return;
}

void			MateriaSource::learnMateria(AMateria *m)
{
	int	i;
	for (i = 0; this->_source[i] && i < 4; i++)
		;
	if (!this->_source[i])
		this->_source[i] = m->clone();
	return;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i]->getType() == type)
			return this->_source[i]->clone();
	return nullptr;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
	for (int i = 0; i < 4; i++)
		if (rhs._source[i])
			this->_source[i] = rhs._source[i]->clone();
	return *this;
}
