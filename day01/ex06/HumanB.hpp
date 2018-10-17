// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:47:00 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:47:01 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
public:
	Weapon *weapon;
	std::string name;

	HumanB(std::string name);
	~HumanB(void);

	void attack();
	void setWeapon(Weapon &p_weapon);
	void setType(std::string &new_type);
};

#endif
