// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 12:09:59 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 12:09:59 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(Sorcerer &src)
{
	*this = src;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string const &Sorcerer::getName()const
{
	return this->name;
}

std::string const &Sorcerer::getTitle()const
{
	return this->title;
}

void Sorcerer::intro()
{
	std::cout << *this;
}

void Sorcerer::polymorph(Victim const &src) const
{
	src.getPolymorphed();
}

void Sorcerer::polymorph(Peon const &src) const
{
	src.getPolymorphed();
}

Sorcerer &Sorcerer::operator = (Sorcerer const &src)
{
	this->name = src.name;
	this->title = src.title;
	return *this;
}

std::ostream &operator << (std::ostream &o, Sorcerer &src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
