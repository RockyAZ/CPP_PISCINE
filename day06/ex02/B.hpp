// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   B.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 20:24:09 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 20:24:09 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"


class B : public Base
{
public:
	B();
	B(B const & src);
	~B();
	B & operator = (B const & src);
};



#endif