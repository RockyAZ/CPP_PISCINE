// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 13:40:12 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/02 13:40:12 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->names[0] = "Chuck";
	this->names[1] = "Bob";
	this->names[2] = "Jack";
	this->names[3] = "Donkey";
	this->names[4] = "Garbage";
	this->names[5] = "Trash";
	this->names[6] = "Oliver";
	this->names[7] = "Corrector";
	this->names[8] = "Padavan";
	this->names[9] = "Omegalul";
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(Zombie *zombie)
{
	std::cout << "WRITE ZOMBIE TYPE" << std::endl;
	std::getline(std::cin, zombie->type);
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->name = name;
	setZombieType(zombie);
	return zombie;
}

Zombie*	ZombieEvent::randomChump()
{
	return (newZombie(this->names[std::rand() % 10]));
}
