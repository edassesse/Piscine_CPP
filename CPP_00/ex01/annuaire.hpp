/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:40:32 by user              #+#    #+#             */
/*   Updated: 2021/08/27 10:39:16 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
# define ANNUAIRE_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

		Contact	add_contact(Contact contact);
		void	search(Contact *contacts, int n);
		void	memory_full(Contact *contact);
		void	show_search(Contact *contacts, int n);

#endif
