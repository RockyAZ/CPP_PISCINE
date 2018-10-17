// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 19:04:08 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 19:04:08 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>

class ScavTrap
{
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &frag);
	ScavTrap(std::string name);
	~ScavTrap(void);

	std::string name;

	void	 takeDamage(unsigned int amount);
	void	 beRepaired(unsigned int amount);
	int	 rangedAttack(std::string const & target);
	int	 meleeAttack(std::string const & target);

	void	setParam();
	std::string challengeNewcomer();

	ScavTrap & operator = (ScavTrap const &frag);

	int meleeAttackDamage;
	int rangedAttackDamage;
private:
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int lvl;
	int _armorDamageReduction;
	std::string repli[10];
};
std::ostream &operator << (std::ostream &o, ScavTrap &frag);
#endif