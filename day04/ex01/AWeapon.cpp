// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:09:48 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:09:48 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon(void)
{

}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}

AWeapon & AWeapon::operator = (AWeapon const &frag)
{
	this->_name = frag._name;
	this->_apcost = frag._apcost;
	this->_damage = frag._damage;
	return *this;
}

std::ostream &operator << (std::ostream &o, AWeapon &src)
{
	o << src.getName();
	return o;
}
