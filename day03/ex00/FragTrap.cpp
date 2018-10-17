// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 11:40:15 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 11:40:15 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "I have borned as simple WTF!!!" << std::endl;
	this->setParam();
}

FragTrap::FragTrap(FragTrap const &frag)
{
	std::cout << "I have borned as the fu#king copy WTF, DUUDE!!!" << std::endl;
	this->setParam();
	*this = frag;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "I have borned with my own name, AWESOME!!!" << std::endl;
	this->setParam();
	this->name = name;
}

FragTrap::~FragTrap(void)
{
	std::cout << *this << " Says:: \"I dying on destructor, this life was disgusting. BUT REMEMBER ME!! MY NAME IS " << *this << "\"" << std::endl;
	return ;
}

void	FragTrap::setParam()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->name = "NoName";
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_lvl = 1;
	this->_cheatAttackDamage = 80;
	this->_zeroAttackDamage = 10;
	this->_pistolAttackDamage = 20;
	this->_lazerAttackDamage = 40;
	this->_magicAttackDamage = 35;
	this->life = 1;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->life == 0)
		std::cout << *this << " already dead" << std::endl;
	else
	{
		this->_hitPoints -= (amount - this->_armorDamageReduction);
		if (this->_hitPoints <= 0)
		{
			std::cout << "Critical shoot!!! FragTrap " << *this << " DIE!!!" << std::endl;
			this->life = 0;
			this->_hitPoints = 0;
		}
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "Repaired " << *this << " on " << amount << std::endl;
}

int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4-TP <" << *this << " attacks <FRAG_" << target << "> at range with <"<< this->_rangedAttackDamage << "> points of damage" << std::endl;
	return this->_rangedAttackDamage;
}

int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> on melee with <"<< this->_meleeAttackDamage << "> points of damage" << std::endl;
	return this->_meleeAttackDamage;
}

int	FragTrap::cheatAttackDamage(std::string const &target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> with CHEAT with <"<< this->_cheatAttackDamage << "> points of damage" << std::endl;
	return this->_cheatAttackDamage;
}

int	FragTrap::zeroAttackDamage(std::string const &target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> with ZERO with <"<< this->_zeroAttackDamage << "> points of damage" << std::endl;
	return this->_zeroAttackDamage;
}

int	FragTrap::pistolAttackDamage(std::string const &target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> with PISTOL with <"<< this->_pistolAttackDamage << "> points of damage" << std::endl;
	return this->_pistolAttackDamage;
}

int	FragTrap::lazerAttackDamage(std::string const &target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> with LAZER with <"<< this->_lazerAttackDamage << "> points of damage" << std::endl;
	return this->_lazerAttackDamage;
}

int	FragTrap::magicAttackDamage(std::string const &target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> with MAGIC with <"<< this->_magicAttackDamage << "> points of damage" << std::endl;
	return this->_magicAttackDamage;
}

int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints >= 25)
	{
		std::cout << "SOMEONE CALL vaulthunter_dot_exe!!!" << std::endl;
		this->_energyPoints -= 25;
		if (this->_energyPoints < 0)
			this->_energyPoints = 0;
		int	(FragTrap::*arr_f[7]) (std::string const &target)= {&FragTrap::meleeAttack,\
																&FragTrap::rangedAttack,\
																&FragTrap::cheatAttackDamage,\
																&FragTrap::zeroAttackDamage,\
																&FragTrap::pistolAttackDamage,\
																&FragTrap::lazerAttackDamage,\
																&FragTrap::magicAttackDamage};
		int i = std::rand() % 7;
		return (*this.*arr_f[i])(target);
	}
	else
		std::cout << *this << " No energy" << std::endl;
	return 0;
}

void	FragTrap::printParam()
{
	std::cout << *this << ":" << std::endl;
	std::cout << "Hit points:" << this->_hitPoints << std::endl;
	std::cout << "ENERGY:" << this->_energyPoints << std::endl << std::endl;

}



FragTrap &FragTrap::operator = (FragTrap const &frag)
{
	this->_hitPoints = frag._hitPoints;
	this->_maxHitPoints = frag._maxHitPoints;
	this->_energyPoints = frag._energyPoints;
	this->_maxEnergyPoints = frag._maxEnergyPoints;
	this->name = frag.name;
	this->_meleeAttackDamage = frag._meleeAttackDamage;
	this->_rangedAttackDamage = frag._rangedAttackDamage;
	this->_armorDamageReduction = frag._armorDamageReduction;
	this->life = frag.life;
	return *this;
}

std::ostream &operator << (std::ostream &o, FragTrap &frag)
{
	o << frag.name;
	return o;
}
