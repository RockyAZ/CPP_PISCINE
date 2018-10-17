// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:44 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:45 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(30, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion &src) : Enemy(src._hp, src._type)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string type) : Enemy(hp, type)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}

void RadScorpion::succes()
{
	std::cout << "SUCCES!!!!!!!!" << std::endl;	
}
