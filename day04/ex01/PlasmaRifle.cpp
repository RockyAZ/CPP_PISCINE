// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:00 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:00 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 20)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle &src)
{
	*this = src;
}

PlasmaRifle::PlasmaRifle(std::string name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	
}

void    PlasmaRifle::attack()const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
