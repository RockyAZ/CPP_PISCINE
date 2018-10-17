// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 18:07:59 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/11 18:07:59 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
public:
	Array();
	Array(Array const & src);
	Array(unsigned int n);
	~Array();
	Array &operator = (Array const & src);
	T const &operator [] (unsigned int n)const;
	unsigned int size()const;

private:
	T *_array;
	unsigned int _size;
};

#endif