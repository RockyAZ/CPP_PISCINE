// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 20:24:20 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 20:24:20 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "C.hpp"

C::C()
{

}

C::~C()
{
	
}

C::C(C const &src)
{
	*this = src;	
}

C & C::operator = (C const & src)
{
	(void)src;
	return *this;
}