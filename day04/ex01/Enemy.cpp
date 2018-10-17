// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:23 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:23 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

Enemy::Enemy()
{
	*this = Enemy(0, "NoType");
}

Enemy::Enemy(Enemy const &src)
{
	this->_hp = src._hp;
	this->_type = src._type;
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::~Enemy(void)
{

}

std::string Enemy::getType()const
{
	return this->_type;
}

int Enemy::getHP()const
{
	return this->_hp;
}

void	Enemy::takeDamage(int dmg)
{
	if (this->_hp > 0)
	{
		this->_hp -= dmg;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}

Enemy & Enemy::operator = (Enemy const &frag)
{
	this->_hp = frag._hp;
	this->_type = frag._type;
	return *this;
}

std::ostream &operator << (std::ostream &o, Enemy &frag)
{
	std::cout << frag.getType() << frag.getHP() << std::endl;
	return o;
}
