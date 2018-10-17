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
#ifndef FRAG_TRAP
#define FRAG_TRAP
#include <iostream>

class FragTrap
{
public:
	FragTrap(void);
	FragTrap(FragTrap const &frag);
	FragTrap(std::string name);
	~FragTrap(void);

	std::string name;

	void	setParam();
	void	 takeDamage(unsigned int amount);
	void	 beRepaired(unsigned int amount);
	int	 rangedAttack(std::string const & target);
	int	 meleeAttack(std::string const & target);
	int	 cheatAttackDamage(std::string const &target);
	int	 zeroAttackDamage(std::string const &target);
	int	 pistolAttackDamage(std::string const &target);
	int	 lazerAttackDamage(std::string const &target);
	int	 magicAttackDamage(std::string const &target);
	int	 vaulthunter_dot_exe(std::string const & target);
	void	 printParam();

	FragTrap & operator = (FragTrap const &frag);
private:
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _lvl;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;
	int _cheatAttackDamage;
	int _zeroAttackDamage;
	int _pistolAttackDamage;
	int _lazerAttackDamage;
	int _magicAttackDamage;
	int life;
};
std::ostream &operator << (std::ostream &o, FragTrap &frag);

#endif