/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:40:06 by user              #+#    #+#             */
/*   Updated: 2021/08/22 16:46:04 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

Contact	add_contact(Contact contact)
{
	contact.set_first_name();
	contact.set_last_name();
	contact.set_nickname();
	contact.set_phone_number();
	contact.set_darkest_secret();
	std::cout << "Contact " << contact.get_first_name() << " has been created" << std::endl;
	return (contact);
}
