// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:11:02 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:11:02 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

int main()
{
Character* zaz = new Character("zaz");
std::cout << *zaz;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
b->succes();
// zaz->equip(pr);
// std::cout << *zaz;
// zaz->equip(pf);
// zaz->attack(b);
// std::cout << *zaz;
// zaz->equip(pr);
// std::cout << *zaz;
// zaz->attack(b);
// std::cout << *zaz;
// zaz->attack(b);
// std::cout << *zaz;
return 0;
}