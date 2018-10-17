// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 20:21:26 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 20:21:26 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
public:

	ClapTrap(void);
	ClapTrap(ClapTrap const &frag);
	ClapTrap(std::string name);
	~ClapTrap(void);

	std::string name;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int lvl;
	int type;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

int	rangedAttack(std::string const & target);
int	meleeAttack(std::string const & target);
void	setParam();
	void	 takeDamage(unsigned int amount);
	void	 beRepaired(unsigned int amount);

	ClapTrap & operator = (ClapTrap const &frag);
};

std::ostream &operator << (std::ostream &o, ClapTrap &frag);

#endif