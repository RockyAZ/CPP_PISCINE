// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 19:16:09 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 19:16:09 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	this->_name = "TacticalMarine";
	std::cout << "* teleports from space *" << std::endl;
}
TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
}
TacticalMarine::~TacticalMarine()
{
	std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *nn = new TacticalMarine;
	return nn;
}

std::string TacticalMarine::getName()const
{
	return this->_name;
}

void TacticalMarine::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

TacticalMarine & TacticalMarine::operator = (TacticalMarine const &frag)
{
	this->_name = frag._name;
	return *this;
}

std::ostream &operator << (std::ostream &o, TacticalMarine &chr)
{
	o << "TacticalMarine: " << chr.getName() << std::endl;
	return o;
}
