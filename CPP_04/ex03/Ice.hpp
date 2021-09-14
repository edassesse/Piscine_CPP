/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:56:56 by user              #+#    #+#             */
/*   Updated: 2021/09/14 14:50:56 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &rhs);
		~Ice(void);

		AMateria	*clone(void)const;
		Ice			&operator=(const Ice &rhs);
		void		use(ICharacter &target);
};

#endif
