// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:15 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:15 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"
//2
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 2)
{

}

PowerFist::PowerFist(PowerFist &src)
{
	*this = src;
}

PowerFist::PowerFist(std::string name, int apcost, int damage) : AWeapon(name, apcost, damage)
{

}

void	PowerFist::attack()const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
