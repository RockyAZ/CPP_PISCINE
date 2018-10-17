// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 12:45:18 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 12:45:18 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

#define STACK 0
#define HEAP 1

class Pony
{
public:
	Pony(int i);
	~Pony(void);
private:
	int _type;
};
#endif