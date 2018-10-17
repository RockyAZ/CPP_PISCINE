// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 20:24:16 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 20:24:16 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base
{
public:
	C();
	C(C const & src);
	~C();
	C & operator = (C const & src);
};


#endif