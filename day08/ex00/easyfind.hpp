// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/12 12:33:08 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/12 12:33:09 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
int easyfind(T &type, int i)
{
	typename T::iterator res = std::find(type.begin(), type.end(), i);
		if (res != type.end())
			return *res;
	throw std::logic_error("CANT FOUND OCCURENCE IN TYPE");
}
#endif