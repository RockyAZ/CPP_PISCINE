// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 15:32:14 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 15:32:15 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	num = N;
	createRandom();
	this->zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		this->zombies[i].name = this->names[std::rand() % 10];
		this->zombies[i].type = this->types[std::rand() % 10];
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "EVERYONE DIE HA-HA-HA-HA!!" << std::endl;
	return ;
}

void	ZombieHorde::createRandom()
{
	this->names[0] = "Chuck";
	this->names[1] = "Bob";
	this->names[2] = "Jack";
	this->names[3] = "Donkey";
	this->names[4] = "Gabriel";
	this->names[5] = "Trash";
	this->names[6] = "Oliver";
	this->names[7] = "Corrector";
	this->names[8] = "Padavan";
	this->names[9] = "Dude";

	this->types[0] = "Warrior";
	this->types[1] = "Berserk";
	this->types[2] = "Archer";
	this->types[3] = "Shaman";
	this->types[4] = "Mag";
	this->types[5] = "Businessman";
	this->types[6] = "Kid";
	this->types[7] = "Titan";
	this->types[8] = "Goblin";
	this->types[9] = "Slayer";
}
