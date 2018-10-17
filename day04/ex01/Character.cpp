// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:54 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:54 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(void)
{
	*this = Character("NoName");
}

Character::Character(Character const &src)
{
	this->_name = src._name;
	this->_AP = src._AP;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_AP = 40;
	this->_weapon = 0;
}

Character::~Character(void)
{

}

std::string Character::getName()const
{
	return this->_name;
}

int Character::getAP()const
{
	return this->_AP;
}

AWeapon *Character::getWeapon()const
{
	return this->_weapon;
}

void Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void Character::equip(AWeapon* newWeapon)
{
	this->_weapon = newWeapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->_weapon == 0)
		std::cout << "NO WEAPON" << std::endl;
	else
	{
		if (this->_AP < this->_weapon->getAPCost())
			std::cout << "NO AP" << std::endl;
		else
		{
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() <= 0)
			{
				delete enemy;
				enemy = 0;
			}
			this->_AP -= this->_weapon->getAPCost();
			if (this->_AP < 0)
				this->_AP = 0;
		}
	}
}

Character & Character::operator = (Character const &frag)
{
	this->_name = frag._name;
	return *this;
}

std::ostream &operator << (std::ostream &o, Character &chr)
{
	if (chr.getWeapon() == 0)
		std::cout << chr.getName() << " has " << chr.getAP() << " AP and is unarmed" << std::endl;
	else
		std::cout << chr.getName() << " has " << chr.getAP() << " AP and wields a " << *chr.getWeapon() << std::endl;
	return o;
}
