// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:32:22 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 15:32:22 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
    Zombie *zombies;
    int num;
	ZombieHorde(int N);
	~ZombieHorde(void);

	void	createRandom();
private:
	std::string names[10];
	std::string types[10];
};
#endif
