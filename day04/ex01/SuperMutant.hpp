// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:35 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:36 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
    SuperMutant(void);
    SuperMutant(SuperMutant &src);
    SuperMutant(int hp, std::string type);
    ~SuperMutant(void);
	void takeDamage(int dmg);
	using Enemy::operator =;
};

#endif