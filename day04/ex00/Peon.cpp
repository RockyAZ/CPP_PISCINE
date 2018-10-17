// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:10:28 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 12:10:28 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	// this->name = name;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::intro()
{
	std::cout << *this;
}

std::string const &Peon::getName()const
{
	return this->name;
}

void Peon::getPolymorphed()const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}

Peon &Peon::operator = (Peon const &src)
{
	this->name = src.name;
	return *this;
}

std::ostream &operator << (std::ostream &o, Peon &src)
{
	// o << "I'm " << src.getName() << " and I like otters !" << std::endl;
	o << src.getName() << " 12312312313123123123123and I like otters !" << std::endl;//WTF!?!?!?
	return o;
}
