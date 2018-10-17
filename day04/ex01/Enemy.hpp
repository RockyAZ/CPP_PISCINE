// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/06 15:10:25 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/06 15:10:26 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int _hp;
	std::string _type;
// [...]
public:
	Enemy();
	Enemy(Enemy const &src);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int dmg);
	Enemy & operator = (Enemy const &frag);
};
std::ostream &operator << (std::ostream &o, Enemy &frag);
#endif
