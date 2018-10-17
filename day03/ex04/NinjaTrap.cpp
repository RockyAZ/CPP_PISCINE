// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 21:28:57 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 21:28:58 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "(NinjaTrap)Do you realy can't give me a stupid name?!?" << std::endl;
	this->setParam();
}

NinjaTrap::NinjaTrap(NinjaTrap const &frag)
{
	std::cout << "(NinjaTrap)HERE IS ANOTHER STUPID ROBOT NinjaTrap BORNED AS COPY!!!" << std::endl;
	this->setParam();
	*this = frag;
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "(NinjaTrap)WHAT A STUPID NAME?!?!" << std::endl;
	this->setParam();
	this->name = name;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "(NinjaTrap)" << *this << " Says:: \"dead..." << *this << "\"" << std::endl;
	return ;
}

void	NinjaTrap::setParam()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->lvl = 1;
	this->name = "NoName";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->type = "NinjaTrap";
}

void	ninjaShoebox(std::string type)
{
	std::cout << type << "Has been eliminated" << std::cout;
}

NinjaTrap &NinjaTrap::operator = (NinjaTrap const &frag)
{
	this->hitPoints = frag.hitPoints;
	this->maxHitPoints = frag.maxHitPoints;
	this->energyPoints = frag.energyPoints;
	this->maxEnergyPoints = frag.maxEnergyPoints;
	this->name = frag.name;
	this->meleeAttackDamage = frag.meleeAttackDamage;
	this->rangedAttackDamage = frag.rangedAttackDamage;
	this->armorDamageReduction = frag.armorDamageReduction;
	return *this;
}

std::ostream &operator << (std::ostream &o, NinjaTrap &frag)
{
	o << frag.name;
	return o;
}
