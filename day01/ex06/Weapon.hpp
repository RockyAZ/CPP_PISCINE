// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:46:36 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 18:46:36 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
public:
	std::string type;

	Weapon(std::string);
	~Weapon(void);

	const std::string	&getType();
	void	setType(std::string newType);
};

#endif
