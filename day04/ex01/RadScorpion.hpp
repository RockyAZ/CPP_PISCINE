// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:48 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:48 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
    RadScorpion(void);
    RadScorpion(RadScorpion &src);
    RadScorpion(int hp, std::string type);
    ~RadScorpion(void);
	void takeDamage(int dmg);
	void succes();
	using Enemy::operator =;
};

#endif