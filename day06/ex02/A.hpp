// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/10 20:24:02 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/10 20:24:02 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"


class A : public Base
{
public:
	A();
	A(A const & src);
	~A();
	A & operator = (A const & src);
};



#endif