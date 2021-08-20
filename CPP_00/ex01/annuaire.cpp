/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:40:06 by user              #+#    #+#             */
/*   Updated: 2021/08/20 07:10:37 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <annuaire.hpp>

void	Annuaire::add_contacts()
{
	if (this->n_contacts == 8)
		std::cout << "Delete a contact before adding a new one" << std::endl;
	else
		set_data();
}
