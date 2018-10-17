// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 20:21:18 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 20:21:19 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "(ClapTrap)Hello! I have born!" << std::endl;
	setParam();
}

ClapTrap::ClapTrap(ClapTrap const &frag)
{
	std::cout << "(ClapTrap)Hi, i'm a copy!" << std::endl;
	setParam();
	*this = frag;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "(ClapTrap)What a perfect name! Thanks a lot!" << std::endl;
	setParam();
	this->name = name;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "(ClapTrap)" << *this << "Says:: \"Oh no! Why i'm dying in destructor?!" << *this << "\"" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
		this->hitPoints -= (amount - this->armorDamageReduction);
		std::cout << "ScavTrap " << *this << " get "<< amount << " dmg! YES!!, GIVE ME MORE PLZ!!!" << std::endl;
		if (this->hitPoints <= 0)
		{
			std::cout << "Critical shoot!!! ScavTrap " << *this << " DIE!!! Y-E-E-E-E-E!!!" << std::endl;
			this->hitPoints = 0;
		}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints >= this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "I WANT TO DIE!!! WHY DO YOU KEEP HEAL ME?!? " << std::endl;
}



int	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Dude, tell me why the f$ck i have too few ranged dmg?!" << std::endl;
	std::cout << "ScavTrap <" << *this << " attacks <" << target << "> at range with <"<< this->rangedAttackDamage << "> points of damage" << std::endl;
	return this->rangedAttackDamage;
}

int	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Oh, i'm sory about that!" << std::endl;
	std::cout << "ClapTrap <" << *this << "> attacks <" << target << "> on melee with <"<< this->meleeAttackDamage << "> points of damage" << std::endl;
	return this->meleeAttackDamage;
}

void	ClapTrap::setParam()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->lvl = 1;
	this->name = "ClapTrap";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}


ClapTrap &ClapTrap::operator = (ClapTrap const &frag)
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


std::ostream &operator << (std::ostream &o, ClapTrap &frag)
{
	o << frag.name;
	return o;
}
