// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/11 18:31:35 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/11 18:31:36 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"

template <class T>
Array<T>::Array()
{
	this->_array = new T;
	this->_size = 0;
}

template <class T>
Array<T>::Array(Array const & src)
{
	*this = src;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	if (n <= 0)
		throw std::overflow_error("Error in da unsigned int constructor!");
	else
	{	
		this->_array = new T[n];
		this->_size = n;
	}
}

template <class T>
Array<T>::~Array()
{
	// for (unsigned int i = 0; i < this->_size; i++)
		// delete this->_array[i];
		delete []this->_array;
}

template <class T>
unsigned int Array<T>::size()const
{
	return this->_size;
}

template <class T>
Array<T> & Array<T>::operator = (Array const & src)
{
	delete []this->_array;

	this->_array = new T[src._size];
	this->_size = src._size;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
	return *this;
}

template <class T>
T const & Array<T>::operator [] (unsigned int n) const
{
	if (n >= this->_size)
		throw std::overflow_error("Error in da [] overloaded operator!");
	else
		return this->_array[n];
}
