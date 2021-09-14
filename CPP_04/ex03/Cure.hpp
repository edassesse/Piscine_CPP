/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:52:17 by user              #+#    #+#             */
/*   Updated: 2021/09/14 14:54:59 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &rhs);
		~Cure(void);

		AMateria	*clone(void)const;
		Cure		&operator=(const Cure &rhs);
		void		use(ICharacter &target);
};

#endif
