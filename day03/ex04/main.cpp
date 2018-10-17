// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: azaporoz <azaporoz@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/05 11:40:27 by azaporoz          #+#    #+#             //
//   Updated: 2018/10/05 11:40:27 by azaporoz         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <ctime>

int main()
{
	srand(time(NULL));
	FragTrap frag0("FRAG_0");
	FragTrap frag1("FRAG_1");
	ScavTrap scav("Bob");

	ClapTrap clap("NEKO");

	NinjaTrap ninja("NARUTO");
	frag1.takeDamage(frag0.vaulthunter_dot_exe("1"));
	frag0.takeDamage(frag1.vaulthunter_dot_exe("0"));
	frag0.beRepaired(24);
	frag1.beRepaired(15);

	for (int i = 0; i < 5; i++)
		std::cout << scav.challengeNewcomer() << std::endl;

	clap.meleeAttack("noone");
	clap.rangedAttack("noone");
	ninja.ninjaShoebox(frag0.type);
	ninja.ninjaShoebox(scav.type);
	ninja.ninjaShoebox(clap.type);
}
