// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 21:29:04 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 21:29:04 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(NinjaTrap const &frag);
	NinjaTrap(std::string name);
	~NinjaTrap(void);

	void ninjaShoebox(std::string type);
	NinjaTrap & operator = (NinjaTrap const &frag);

private:
	void	setParam();
};
std::ostream &operator << (std::ostream &o, NinjaTrap &frag);

#endif