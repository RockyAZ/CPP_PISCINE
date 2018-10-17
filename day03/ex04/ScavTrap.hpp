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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &frag);
	ScavTrap(std::string name);
	~ScavTrap(void);

	int	 rangedAttack(std::string const & target);
	int	 meleeAttack(std::string const & target);

void destroy();

	void	setParam();
	std::string challengeNewcomer();

	ScavTrap & operator = (ScavTrap const &frag);

private:
	std::string repli[10];
};
std::ostream &operator << (std::ostream &o, ScavTrap &frag);
#endif