// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/13 16:56:03 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/13 16:56:03 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mutantstack.hpp"

template <class T>
MutantStack<T>::MutantStack()
{

}

template <class T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
	*this = src;
}

template <class T>
MutantStack<T>::~MutantStack()
{

}

template <class T>
MutantStack<T> & MutantStack<T>::operator = (MutantStack const & src)
{
	this->_main = src.main;
	return *this;
}

template <class T>
T MutantStack<T>::top()
{
	return this->_main.front();
}

template <class T>
T MutantStack<T>::size()
{
	return this->_main.size();
}

typedef std::list<int>::iterator iterator;

template <class T>
iterator MutantStack<T>::begin()
{
	return this->_main.begin();
}

template <class T>
iterator MutantStack<T>::end()
{
	return this->_main.end();
}

template <class T>
const iterator MutantStack<T>::begin() const
{
	return this->_main.begin();
}

template <class T>
const iterator MutantStack<T>::end() const
{
	return this->_main.end();
}



template <class T>
void MutantStack<T>::push(T src)
{
	this->_main.push_front(src);
}

template <class T>
void MutantStack<T>::pop()
{
	this->_main.pop_front();
}
