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
	std::cout << "(FragTrap)I have borned as simple WTF!!!" << std::endl;
	this->setParam();
}

FragTrap::FragTrap(FragTrap const &frag)
{
	std::cout << "(FragTrap)I have borned as the fu#king copy WTF, DUUDE!!!" << std::endl;
	this->setParam();
	*this = frag;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "(FragTrap)I have borned with my own name, AWESOME!!!" << std::endl;
	this->setParam();
	this->name = name;
}

FragTrap::~FragTrap(void)
{
	std::cout << "(FragTrap)" << *this << " Says:: \"I dying on destructor, this life was disgusting. BUT REMEMBER ME!! MY NAME IS " << *this << "\"" << std::endl;
	return ;
}

void	FragTrap::setParam()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->name = "NoName";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->lvl = 1;
	this->_cheatAttackDamage = 80;
	this->_zeroAttackDamage = 10;
	this->_pistolAttackDamage = 20;
	this->_lazerAttackDamage = 40;
	this->_magicAttackDamage = 35;
}

// void	ClapTrap::takeDamage(unsigned int amount)
// {
// 		this->hitPoints -= (amount - this->armorDamageReduction);
// 		// std::cout << "FragTrap " << *this << " get "<< amount << " dmg!" << std::endl;
// 		if (this->hitPoints <= 0)
// 		{
// 			// std::cout << "Critical shoot!!! FragTrap " << *this << " DIE!!!" << std::endl;
// 			this->hitPoints = 0;
// 		}
// }

// void	ClapTrap::beRepaired(unsigned int amount)
// {
// 	this->hitPoints += amount;
// 	if (this->hitPoints >= this->maxHitPoints)
// 		this->hitPoints = this->maxHitPoints;
// 	// std::cout << "Repaired " << *this << " on " << amount << std::endl;
// }

int	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4-TP <" << *this << " attacks <FRAG_" << target << "> at range with <"<< this->rangedAttackDamage << "> points of damage" << std::endl;
	return this->rangedAttackDamage;
}

int	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4-TP <" << *this << "> attacks <FRAG_" << target << "> on melee with <"<< this->meleeAttackDamage << "> points of damage" << std::endl;
	return this->meleeAttackDamage;
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
	if (this->energyPoints >= 25)
	{
		std::cout << "SOMEONE CALL vaulthunter_dot_exe!!!" << std::endl;
		this->energyPoints -= 25;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
		int	(FragTrap::*arr_f[7]) (std::string const &target)= {&FragTrap::meleeAttack,\
																&FragTrap::rangedAttack,\
																&FragTrap::cheatAttackDamage,\
																&FragTrap::zeroAttackDamage,\
																&FragTrap::pistolAttackDamage,\
																&FragTrap::lazerAttackDamage,\
																&FragTrap::magicAttackDamage};
	srand(time(NULL));

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
	std::cout << "Hit points:" << this->hitPoints << std::endl;
	std::cout << "ENERGY:" << this->energyPoints << std::endl << std::endl;

}



FragTrap &FragTrap::operator = (FragTrap const &frag)
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

std::ostream &operator << (std::ostream &o, FragTrap &frag)
{
	o << frag.name;
	return o;
}
