// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:57 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:57 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character
{
private:
	std::string _name;
	int _AP;
	AWeapon *_weapon;
public:
	Character();
	Character(Character const &src);
	Character(std::string const & name);
	~Character();
	void recoverAP();
	void equip(AWeapon *newWeapon);
	void attack(Enemy *enemy);
	std::string getName() const;
	int getAP() const;
	AWeapon *getWeapon()const;
	Character & operator = (Character const &frag);
};
std::ostream &operator << (std::ostream &o, Character &frag);
#endif