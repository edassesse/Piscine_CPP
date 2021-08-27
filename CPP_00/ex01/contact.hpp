/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:23:33 by user              #+#    #+#             */
/*   Updated: 2021/08/26 16:59:41 by edassess         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	public:

		Contact(void);
		~Contact(void);


		std::string	get_first_name(void)const;
		std::string	get_last_name(void)const;
		std::string	get_nickname(void)const;
		std::string	get_phone_number(void)const;
		std::string	get_darkest_secret(void)const;

		void		set_first_name(void);
		void		set_last_name(void);
		void		set_nickname(void);
		void		set_phone_number(void);
		void		set_darkest_secret(void);
		void		show(void)const;

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

};

#endif
