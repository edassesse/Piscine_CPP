/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:40:32 by user              #+#    #+#             */
/*   Updated: 2021/08/20 07:07:46 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP

# include <iostream>
# include "contact.hpp"

class Annuaire
{
	private:
		Contact	contacts[8];
		int		n_contacts;
	public:
		Annuaire();
		~Annuaire();

		void	add_contact(void);
		void	search_contact(void);
}

#endif
