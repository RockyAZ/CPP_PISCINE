// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 19:16:21 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 19:16:21 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	this->_name = "AssaultTerminator";
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
}
AssaultTerminator::~AssaultTerminator()
{
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *nn = new AssaultTerminator;
	return nn;
}

std::string AssaultTerminator::getName()const
{
	return this->_name;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

AssaultTerminator & AssaultTerminator::operator = (AssaultTerminator const &frag)
{
	this->_name = frag._name;
	return *this;
}

std::ostream &operator << (std::ostream &o, AssaultTerminator &chr)
{
	o << "AssaultTerminator: " << chr.getName() << std::endl;
	return o;
}
