// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:46:48 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:46:49 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	Weapon *weapon;
	std::string name;

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack();
	void setType(std::string &new_type);
};

#endif
