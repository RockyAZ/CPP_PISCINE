// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:10:12 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 12:10:13 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim(Victim &src)
{
	*this = src;
}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}


void Victim::intro()
{
	std::cout << *this;
}

std::string const &Victim::getName()const
{
	return this->name;
}

void Victim::getPolymorphed()const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

Victim &Victim::operator = (Victim const &src)
{
	this->name = src.name;
	return *this;
}

std::ostream &operator << (std::ostream &o, Victim &src)
{
	o << "I'm " << src.getName() << " and I like otters !" << std::endl;
	return o;
}
