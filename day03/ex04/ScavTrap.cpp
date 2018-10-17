// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 19:04:01 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 19:04:01 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "(ScavTrap)Do you realy can't give me a stupid name?!?" << std::endl;
	this->setParam();
}

ScavTrap::ScavTrap(ScavTrap const &frag)
{
	std::cout << "(ScavTrap)HERE IS ANOTHER STUPID ROBOT ScavTrap BORNED AS COPY!!!" << std::endl;
	this->setParam();
	*this = frag;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "(ScavTrap)WHAT A STUPID NAME?!?!" << std::endl;
	this->setParam();
	this->name = name;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "(ScavTrap)" << *this << " Says:: \"YEEE BOY I DIE!!" << *this << "\"" << std::endl;
	return ;
}

int	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Dude, tell me why the f$ck i have too few ranged dmg?!" << std::endl;
	std::cout << "ScavTrap <" << *this << " attacks <" << target << "> at range with <"<< this->rangedAttackDamage << "> points of damage" << std::endl;
	return this->rangedAttackDamage;
}

int	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Dude, tell me why the f$ck i have too match meleeAttack dmg?!" << std::endl;
	std::cout << "ScavTrap <" << *this << "> attacks <" << target << "> on melee with <"<< this->meleeAttackDamage << "> points of damage" << std::endl;
	return this->meleeAttackDamage;
}

// void	ClapTrap::takeDamage(unsigned int amount)
// {
// 		this->hitPoints -= (amount - this->armorDamageReduction);
// 		// std::cout << "ScavTrap " << *this << " get "<< amount << " dmg! YES!!, GIVE ME MORE PLZ!!!" << std::endl;
// 		if (this->hitPoints <= 0)
// 		{
// 			// std::cout << "Critical shoot!!! ScavTrap " << *this << " DIE!!! Y-E-E-E-E-E!!!" << std::endl;
// 			this->hitPoints = 0;
// 		}
// }

// void	ClapTrap::beRepaired(unsigned int amount)
// {
// 	this->hitPoints += amount;
// 	if (this->hitPoints >= this->maxHitPoints)
// 		this->hitPoints = this->maxHitPoints;
// 	// std::cout << "I WANT TO DIE!!! WHY DO YOU KEEP HEAL ME?!? " << std::endl;
// }


void	ScavTrap::setParam()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->lvl = 1;
	this->name = "NoName";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->type = "ScavTrap";
	this->repli[0] = "You comming again? ";
	this->repli[1] = "Oh dude, someone sid me that you are always cheating in UnitFuckTORY";
	this->repli[2] = "Hope you will get -42 on next life!";
	this->repli[3] = "Please kill me or yourself, you boring me!";
	this->repli[4] = "Dude, you are useless ";
	this->repli[5] = "Can you give me more useless advices please?!?";
	this->repli[6] = "I HATE FlipTrap!!";
	this->repli[7] = "So, who the fu#k invented this stupid nsme that i have?";
	this->repli[8] = "Staying on manning the door...Staying on manning the door... F#CK!!";
	this->repli[9] = "OMEGALUL";
}
void ScavTrap::destroy()
{
	this->hitPoints = 0;
}

std::string ScavTrap::challengeNewcomer()
{
	std::cout << "RANDOM ScavTrap RANDOM ScavTrap RANDOM ScavTrap.....HERE:" << std::endl;
	return (this->repli[std::rand() % 10]);
}


ScavTrap &ScavTrap::operator = (ScavTrap const &frag)
{
	this->hitPoints = frag.hitPoints;
	this->maxHitPoints = frag.maxHitPoints;
	this->energyPoints = frag.energyPoints;
	this->maxEnergyPoints = frag.maxEnergyPoints;
	this->name = frag.name;
	this->meleeAttackDamage = frag.meleeAttackDamage;
	this->rangedAttackDamage = frag.rangedAttackDamage;
	this->armorDamageReduction = frag.armorDamageReduction;
	return *this;
}


std::ostream &operator << (std::ostream &o, ScavTrap &frag)
{
	o << frag.name;
	return o;
}
