// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:09:45 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:09:45 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
protected://?
	std::string _name;
	int _apcost;
	int _damage;

public:
	virtual void attack() const = 0;
	AWeapon(void);
	AWeapon(AWeapon const &weapon);
	AWeapon(std::string const & name, int apcost, int damage);
	// [...]
	~AWeapon(void);
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	AWeapon & operator = (AWeapon const &frag);
	// [...]
};
std::ostream &operator << (std::ostream &o, AWeapon &src);
#endif