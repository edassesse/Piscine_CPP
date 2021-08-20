/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:40:06 by user              #+#    #+#             */
/*   Updated: 2021/08/20 17:08:19 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

void	Annuaire::add_contact()
{
	if (this->n_contacts == 8)
		std::cout << "Delete a contact before adding a new one" << std::endl;
	else
	{
		Contact();
		this->n_contacts++;
	}
}
