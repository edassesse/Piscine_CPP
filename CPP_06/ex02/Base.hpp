/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:58:56 by user              #+#    #+#             */
/*   Updated: 2021/09/21 19:17:59 by user             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base(void) {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif
