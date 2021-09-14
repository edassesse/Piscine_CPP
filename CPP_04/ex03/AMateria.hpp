/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edassess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:59:02 by edassess          #+#    #+#             */
/*   Updated: 2021/09/14 16:36:26 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &rhs);
		virtual ~AMateria(void);

		AMateria	&operator=(const AMateria &rhs);
		std::string const & getType(void)const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
