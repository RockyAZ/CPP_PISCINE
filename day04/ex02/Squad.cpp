// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 19:16:00 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 19:16:00 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"

Squad::Squad()
{
	this->_numberCurr = this->_numberAll;
	for (int i = 0; i < 15; i++)
		*this->_units = 0;
}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad()
{
	for(int i = 0; i < this->getCount(); i++)
		delete this->_units[i];
}

int Squad::getCount() const
{
	return this->_numberAll;
}

ISpaceMarine* Squad::getUnit(int N) const
{
	if(this->_units[N])
		return (this->_units[N]);
	else
		std::cout << "NO UNIT" << std::endl;
	return 0;
}

int Squad::getAll()const
{
	return this->_numberAll;
}

int Squad::push(ISpaceMarine *src)
{
	if (this->_numberAll > 15)
		return -1;
	std::cout << "join one more UNIT to ARMY" << std::endl;
	this->_units[this->_numberAll] = src;
	this->_numberCurr = this->_numberAll;
	this->_numberAll++;
	std::cout << "Now in ARMY :" << this->_numberAll << std::endl;
	return this->_numberCurr;
}

Squad & Squad::operator = (Squad const &frag)
{
	this->_numberCurr = frag._numberCurr;
	return *this;
}

std::ostream &operator << (std::ostream &o, Squad &chr)
{
	o << "SQUAD: " << chr.getAll() << std::endl;
	return o;
}

int Squad::_numberAll = 0;
