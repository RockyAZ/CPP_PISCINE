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
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(FragTrap const &frag);
	FragTrap(std::string name);
	~FragTrap(void);

	void	setParam();
	int	 rangedAttack(std::string const & target);
	int	 meleeAttack(std::string const & target);
	int	 cheatAttackDamage(std::string const &target);
	int	 zeroAttackDamage(std::string const &target);
	int	 pistolAttackDamage(std::string const &target);
	int	 lazerAttackDamage(std::string const &target);
	int	 magicAttackDamage(std::string const &target);
	int	 vaulthunter_dot_exe(std::string const & target);
	void	 printParam();
void destroy();

	FragTrap & operator = (FragTrap const &frag);
private:
	int _cheatAttackDamage;
	int _zeroAttackDamage;
	int _pistolAttackDamage;
	int _lazerAttackDamage;
	int _magicAttackDamage;
};
std::ostream &operator << (std::ostream &o, FragTrap &frag);

#endif